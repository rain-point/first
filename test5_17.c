#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	char b = 'A';
	int arr[20] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int[20]));
	return 0;
}
int main()
{
	int i = 11;
	//00000000 00000000 00000000 00001011 让倒数第三位变成1，其余不变
	//00000000 00000000 00000000 00000100  按位或  就能得到
	//1 << 2 1左移2位得到 00000000 00000000 00000000 00000100

	//int j = i | 4;
	int j = i | (1 << 2);
	printf("%d\n", j);
	//将j变成原来的i  只需要按位与操作
	//00000000 00000000 00000000 00001111
	//11111111 11111111 11111111 11111011
	//00000000 00000000 00000000 00001011
	//而  11111111 11111111 11111111 11111011 可以由按位取反得到
	//    00000000 00000000 00000000 00000100  这个数又可以通过1左移2位得到
	j = j & (~(1 << 2));
	printf("%d\n", j);
	//int a = 0;
	//printf("%d\n", ~a);
	return 0;
}
