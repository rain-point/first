#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int(*p)[10] = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", (*p)[i]);
//	}
//	return 0;
//}
//int my_strlen(char *arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello bit";
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//char* my_strcpy(char*dest, const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[20] = "qqqqqqqqq";
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2;
////s1,s2是全局的
//struct Point
//{
//	int x;
//	int y;
//};
//struct S
//{
//	char arr[10];
//	struct Point p;
//	double d;
//	int *ptr;
//};
//int main()
//{
//	struct Point p = { 1, 2 };
//	printf("%d %d\n", p.x, p.y);
//	int a = 2021;
//	struct S s = { "abcdef", { 2, 3 }, 3.14,&a};
//	printf("%s %d %d %lf", s.arr, s.p.x, s.p.y, s.d,*(s.ptr));
//	return 0;
//}
//struct S
//{
//	char arr[1000];
//	int num;
//	double d;
//};
//void print(struct S* ps)
//{
//	printf("%s %d %lf\n", ps->arr, ps->num, ps->d);
//}
//int main()
//{
//	struct S s = { "hello bit", 100, 99.8 };
//	print(&s);
//	return 0;
//}
//void adjust(int *arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		while (i >= 1 && i <= 10)
//		{   
//			for (j = 1;; j = j + i + 1)
//			{
//				if (arr[i] % 2 != 0)
//				{
//					int tmp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = tmp;
//					break;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	adjust(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
void yanghui(int arr[30][30],int n)
{
	int i = 0;
	int j = 0;
	arr[0][0] = 1;
	for (i = 1; i <n; i++)
	{
		int j = 0;
		for (j = 1; j <=i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d \n", arr[i][j]);
		}
	}
}
int main()
{
	int arr[30][30] = { 0 };
	int n = 0;
	scanf("%d", &n);
	yanghui(arr,n);
	return 0;
}

//int main()
//{
//	int murder[4] = { 0 };
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		murder[i] = 1;
//		if ((murder[0] != 1) +
//			(murder[2] == 1) +
//			(murder[3] == 1) +
//			(murder[3] != 1) == 3)
//		{
//			break; 
//		}
//		murder[i] = 0; 
//	}
//	return 0;
//}