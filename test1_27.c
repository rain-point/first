#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{   
//	int arr[5] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", *(p + i));
//	}
//	return 0;
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针-指针  绝对值是指针和指针之间的元素个数
//	//指针-指针 计算的前提条件是：两个指针指向的是同一块连续的条件
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char *start = str;
//	while (*str != '0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	arr;//二维数组的数组名也是数组首元素地址 
//	return 0;
//}
//int main()
//{   //int arr[10]={0};整形数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//arr就是指针数组
//	int *arr[3] = { &a, &b, &c };//存放整形指针的数组
//	char *ch[5];//存放字符指针的数组
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;//一个十六进制位占4个比特位
//	/*int *p = &a;
//	*p = 0;*/
//	char *p = &a;
//	*p = 0;
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int *p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + 1) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	char*pc = arr;
	int i = 0;
	for (i = 0; i < 40; i++)
	{
		*(pc + i) = 'x';
	}
	return 0;
}
int *test()
{
	int a = 10;
	return &a;
}
int main()
{
	int *p = test();
	printf("%d\n", *p);
	return 0;
}
