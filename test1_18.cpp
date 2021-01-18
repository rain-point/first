#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		if (year % 4 == 0&&year%100!=0)
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (n = 2; n < i; n++)
//		{
//			if (i % 1 == 0 && i%n != 0);
//				
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 10; i <= 100; i++)
//	{
//		if (i % 10 == 9 ||i/10==9)
//		{
//			printf("%d\n", i);
//		}
//	}
//	printf("%d", 9);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum=0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + (1 / i);
//		i = -i;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//int main()
//{
//	int a[] = { 0 };
//	int i = 0,max=0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0;i<10;i++)
//{
//		if (a[i]>max)
//		{
//			max = a[i];
//		}
//}
//	printf("%d", max);
//		
//}
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			printf("%d*%d=%2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = arr[0];
	int right = sz;
	int mid = (left + right) / 2;
	int k = 7;
	for (int i = 0; i<sz; i++)
	{
			int mid = (left + right) / 2;
			if (arr[mid] > k)
			{
				right = mid - 1;
			}
			else if (arr[mid] < k)
			{
				left = mid + 1;
			}
			else
			{
				printf("已找到这个数字的下标为：%d\n", mid);
				break;
			}
			if (left>right)
			{
				printf("找不到此数字\n");
			}		
	}
	return 0;
}