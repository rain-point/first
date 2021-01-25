#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int DigitSum(int i)
//{
//	if (i > 10)
//	{
//		return DigitSum(i / 10) + i % 10;
//	}
//	else
//		return i;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = DigitSum(i);
//	printf("%d\n",ret);
//	return 0;
//}
//int pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//		return n*pow(n,k - 1);
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int ret = pow(n, k);
//}
//int Fib(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Fib(i);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	
//}
//void bubble_sort(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0; 
//}
//void init(int arr[],int sz)
//{
//	int i = 0;
//	while (i<sz)
//	{
//		if (arr[i] != 0)
//		{
//			arr[i] = 0;
//			i++;
//		}
//		printf("%d", arr[i]);
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*init(arr,sz);*/ /*Print(arr,sz);*/Reverse(arr, sz);
//	return 0;
//}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i<5; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	return 0;
}