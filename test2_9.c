#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_int(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	return 0;
}