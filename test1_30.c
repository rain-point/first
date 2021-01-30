#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int money;
	scanf("%d", &money);
	int total = 0;
	int empty = 0;
	total += money;
	empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", total);
	return 0;
}
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 0; i <= 100000; i++)
//	{
//		int j = 0;
//		tmp = i % 10;
//		int count = 1;
//		for (j = 10; j < i; j *= 10)
//		{
//			ret = i / j;
//			while (count != tmp)
//			{
//				count++;
//				ret *= ret;
//				sum = ret + sum;
//			}
//		}
//	}
//	if (sum == i)
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	for (i = 0; i<line; i++)
	{
		int j = 0;
		for (j = 0; j<line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i<line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j<2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}