#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
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
void print(int (*p)[5],int r,int c)
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
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10;
	int *pa = &a;//pa就是整型指针
	char arr[5] = { 0 };
	char(*parr)[5] = &arr;//parr就是数组指针
	printf("%p\n", &Add);
	int(*pf)(int, int) = &Add;//pf就是函数指针
	return 0;
}
int my_strlen(const char *str)
{
	assert(str!=NULL);
	int count = 0;
	while (*str)
	{
		*str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int(*pf)(const char*) = my_strlen;
	int len = (*pf)("bit");
	printf("%d", len);
	return 0;
}
void(*signal(int, void(*)(int)))(int);
typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);
int Add(int x,int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x*y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	int (*pfArr[])(int,int) = { 0, Add, sub, mul, div };
	do
	{
		if (0 == input)
		{
			printf("退出程序");
			break;
		}
		else if (input>=1&&input<=4)
		{
	         scanf("%d", &input);
		     printf("请输入两个操作数");
		     scanf("%d %d", &x, &y);
		     ret = pfArr[input](x, y);
		     printf("ret=%d\n", ret);
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void bubble_sort(int *arr, int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	print_arr;
	return 0;
}

void test1()
{
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
}
