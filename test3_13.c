#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 0 };
	//动态内存开辟-堆区上
	int* p = (int *)malloc(40);
	if (p == NULL)
	{
		printf("内存开辟失败\n");//希望把40个字节当成一个10个整型的数组
	}
	else
	{
		//开辟成功
		int i = 0;
		for (i = 0;i < 10; i++)
		{
			*(p + i) = 0;
		}
	}
	return 0;
}
#include<string.h>
#include<errno.h>
int main()
{
	int*p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		//空间不够了，增加空间
		int *ptr = (int*)realloc(p, 80);//调整空间大小
		for (ptr != NULL)
		{
			p = ptr;
		}
		for (i = 0; i < 20; i++)
		{
			printf("%d ", *(p + i));
		}
		free(p);
		p = NULL;
	}
	return 0;
}
int main()
{
	int *p = (int *)malloc(INT_MAX);
	//p是有可能为NULL指针的，当为NULL的时候，*P就是非法访问内存。
}