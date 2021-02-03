#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int cmp_int(const void*e1,const void*e2)
{
	return *(int *)e1 - *(int *)e2;
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	return 0;
}
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int*)(&a + 1);
	printf("%d %d", *(a + 1), *(ptr - 1));
	return 0;
}