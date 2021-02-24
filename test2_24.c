#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int  Fib(int n)
{
	if (n == 0)
		return  0;
	else  if (n == 1 || n == 2)
		return  1;
	else
		return  Fib(n - 1) + Fib(n - 2);
}

//非递归形式
int Fib(int n){
	int a = 1, b = 1;
	int c = 1;
	while (n > 2){
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
void count_binary(int num){
	int count = 0;
	while (num){
		if (num % 2 == 1)
			count++;
		num /= 2;
	}
}
//移位
void count_binary(int num){
	int count = 0;
	for (int i = 0; i<32; i++){
		if ((num >> i) & 1 == 1)
			count++;
	}
}

//优化
void count_binary(int num){
	int count = 0;
	while (num){
		count++;
		num = num&(num - 1);
	}
}