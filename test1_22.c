#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"Add.h"
#include<math.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);//print函数可以把num的每一位打印在屏幕上
//	return 0;
//}
//int my_strlen(char *str)
//{
	//int count = 0;
	//while(*str != '\0')
	//{
	//	count++;
	//	str++;
	//}
	//return count;

	//2.

//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}
//int Fib(int n)
//{
//	
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int sushu(int x)
//{
//	int i = 0;
//	int flag = 0;
//	for (i = 2; i <=sqrt(x); i++)
//	{
//		if (x%i != 0)
//		{
//			flag = 1;
//			return flag;
//		}
//		else
//			flag = 0;
//		return flag;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag=sushu(i);
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//void y_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//	{
//		printf("%d", x);
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	y_year(year);
//	return 0;
//}
//void swap(int *a, int *b)
//{
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
//void count(int i)
//{
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= i; j++)
//	{
//		int a = 0;
//		for (a = 1; a <= j; a++)
//		{
//			sum = a*j;
//			printf("%d*%d=%2d ", a, j, sum);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	count(i);
//}
#include<stdio.h>
int main()
{
	int arr[7] = { 0 };
	int i = 0;
	double sum = 0.0;
	int max, min;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
		max = arr[0];
		min = arr[0];
		for (i = 0; i<7; i++)
		{
			if (arr[i]>max)
			{
				max = arr[i];
			}

			if (arr[i]<min)
			{
				min = arr[i];
			}
		}
	printf("%.2lf", (sum - max - min) / 5);
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[7] = { 0 };
	int i = 0;
	double sum = 0.0;
	int max, min;
	for (i = 0; i<7; i++)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	max = arr[0];
	min = arr[0];

	for (i = 0; i<7; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}

		if (arr[i]<min)
		{
			min = arr[i];
		}
	}

	printf("%.2lf", (sum - max - min) / 5);
	return 0;
}