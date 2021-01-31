#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	char*arr[] = {"abcdef", "hello", "bit" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//		printf("%d", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为自幂数
//		//1.计算i的位数N
//		//2.获取i的每一位，并计算每一位的n次方之和
//		//3.判断并输出
//		int tmp = i;
//		int n = 1;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10,n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
int main()
{
	int line = 0;
	scanf("%d", &line);
	//上-line行
	//下-line行
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印一行
		//空格
		//*
		int j = 0;
		for (j = 0; i <line-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= 2 * line + 1; j++)
		{
			printf("*");
		}	
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
