#include<stdio.h>
#include<string.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy_s(arr2, arr1,3);
//	//     目的地   来源
//	//strlen-string length 字符串长度有关
//	printf("%s\n", arr2);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		
//
//
//			printf("%d\n", i);
//	}
//	return 0;
//int get_max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//	
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//当实参传给形参的时候，形参其实是实参的临时拷贝，对形参的改变是不会改变实参的
//void swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d  b=%d\n",a,b);
//	swap(a, b);
//	printf("a=%d  b=%d");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	int p = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		p = p*i;
//		printf("%d\n", p);
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= (sqrt(n)); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y%4==0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int year = 0;
//	for (year = 100; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
////}
//int binary_search(int arr[], int k, int sz)
//{
//	//算法的实现
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	//中间元素下标
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//		return -1;
//	}
//
//}



//
//int main()
//{  //二分查找
//	//在一个有序数组中查找具体的某个数
//	//找到了这个数返回这个数的下标，找不到返回个-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int ret=binary_search(arr, k);
//	if (ret = -1)
//	{
//		printf("找不到\n");
//	}
//	else
//		printf("%d\n", ret);
//	return 0;
//}

//函数的嵌套调用

	//void new_line()
	//{
	//	printf("hehe\n");
	//}
	//void three_line()
	//{
	//	int i = 0;
	//	for (i = 0; i < 3; i++)
	//	{
	//		new_line();
	//	}
	//}
	//int main()
	//{
	//	three_line();
	//	return 0;
	//}
	//
//
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//
//	printf("%d\n", len);
//	
//	return 0;
//}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}