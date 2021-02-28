#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d", arr[i][j]);
			printf("\n");
		}
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5, }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	printf(arr, 3, 5);
	return 0;
}
void print(int(*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5, }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	//二维数组传参，数组名也是首元素地址，二维数组的首元素是第一行的地址
	//传过去的是第一行的地址
	printf(arr, 3, 5);
	return 0;
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void**e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test2()
{
	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0], cmp_stu_by_age));
}
int main()
{
	test2();
	return 0;
}
