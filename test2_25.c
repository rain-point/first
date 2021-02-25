#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int isprime = 1;  //是素数
	/*掌握这种方法，当A事件有1，2两种情况时，
	1：运算后，结果始终不变；
	2：运算中，结果肯定发生过变化*/

	int i, x;

	scanf("%d", x);
	for (i = 2; i<x; i++){
		if (x%i == 0){
			isprime = 0;
			break;
		}
	}
	if (isprime == 1){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
int main(void)
{
	int a, n;
	scanf("%d %d", &a, &n);

	//运用循环分别求出每次的数值
	int i;
	int sum = 0;
	int t = 0;
	int m = 1;
	for (i = 0; i<n; i++){
		t = t * 10 + a;
		sum += t;

	}
	printf("%d", sum);

	return 0;
}
