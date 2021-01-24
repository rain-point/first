#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//冒泡排序的趟数
//	{
//		int j = 0;
//		int flag = 1;//有序
//		for (j = 0; j<sz - i - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//发现无序
//			}
//		}
//		if (flag == 1)
//		{
//			break;//有序不用排
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}
void print(int *arr, int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		printf("%d", row);
		for (j = 0; j < col; j++)
		{
			printf("%d", col);
		}
	}
}

int main()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print(arr, 3, 5);
	return 0;
}