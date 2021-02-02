#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int Add(int x,int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x*y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
////int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入两个操作数");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("%d ", ret);
//			break;
//
//		case 2:
//			printf("输入两个操作数");
//			scanf("%d%d", &x, &y);
//			ret = sub(x, y);
//			printf("%d ", ret);
//			break;
//		case 3:
//			printf("输入两个操作数");
//			scanf("%d%d", &x, &y);
//			ret = mul(x, y);
//			printf("%d ", ret);
//			break;
//		case 4:
//			printf("输入两个操作数");
//			scanf("%d%d", &x, &y);
//			ret = div(x, y);
//			printf("%d ", ret);
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pfArr[])(int,int) = { 0, Add, sub, mul, div };
//	do
//	{
//		if (0 == input)
//		{
//			printf("退出程序");
//			break;
//		}
//		else if (input>=1&&input<=4)
//		{
//	         scanf("%d", &input);
//		     printf("请输入两个操作数");
//		     scanf("%d %d", &x, &y);
//		     ret = pfArr[input](x, y);
//		     printf("ret=%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
////	return 0;
////}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的内容
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
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
//	int arr[] = { 1, 5, 2, 4, 3, 6, 7, 0 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);//排成升序
//	print_arr(arr,sz);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void*e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test2()
//{
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
//	//按年龄排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//
//}
//int cmp_int(const void*e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void test1()
//{
//	//排序整形数组
//	int arr[] = { 1, 5, 2, 4, 3, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print_arr(arr, sz);
//}
//int main()
//{
//	test2();
//	return 0;
//}
void print2(int(*p)[5], int r, int c)
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
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	int a[5];
	print2(arr, 3, 5);
	return 0;
}