#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(int n)
{
	int a, b, c;
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;
	return n == a * a * a + b * b * b + c * c * c;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%s\n", fun(n) ? "1" : "0");
	return 0;
}