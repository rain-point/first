#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 0 };//在栈上申请了40个字节的空间
//	//动态内存的开辟 在堆区上
//	int *p = (int *)malloc(40);//希望把40个字节当成一个10个整型的数组
//	if (p == NULL)
//	{
//		printf("内存开辟失败\n");
//		return 1;
//	}
//	else
//	{
//		//开辟成功
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for(i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//		//不再使用p指向的内存
//		//手动释放动态开辟的内存
//		free(p);
//		p = NULL;
//	}
//	//动态内存的回收：
//	//1.程序结束时会自动回收
//	//2.手动回收！
//	return 0;
//}
//malloc开辟的空间不初始化
//malloc参数只有一个
//而calloc开辟的空间是初始化的
//而calloc的参数有两个
int main()
{
	int *p = (int *)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", (p + i));
		}
		//空间不够了，增加空间
		realloc(p,80);//调整空间大小
		free(p);
		p = NULL;
	}
	return 0;
}
int main()
{
	int*p = malloc(INT_MAX);
	//p有可能为空指针，当为NULL的时候，*p就是非法访问内存
	return 0;
}
//2.越界访问
int main()
{
	int *p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= 10; i++)
		{
			*(p + i) = 0;
		}
		free(p);
		p = NULL;
	}
	return 0;
}