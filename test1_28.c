#define _CRT_SECURE_NO_WARNINGS 1
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int i = 0;
//	int ret = Add(2, 3);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	//求N的阶乘
//	int i = 0;
//	for (n = 1; n <= 3; n++)
//	{   int ret = 1;
//		for (i = 1; i < n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//模拟实现strcpy函数
//void my_strcpy(char* dest, char*src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//}
//int main()
//{
//	char arr1[20] = "qqqqqqqqqqqqqqqqq";
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	int c = 0;
//	int count = 0;
//	scanf("%d %d", &a, &b);
//	c = a^b;
//	while (c)
//	{
//		if (c%2==1)
//		count++;
//		c = c / 2;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//scanf("%d", &i);
//	for (i=31; i >= 1;i-=2)
//	{
//		//if ((i >> 1) % 2 == 0)
//			printf("%d", (i>>1)&1);
//	}
//	for (i = 30; i >= 1; i -= 2)
//	{
//		printf("%d", (i >> 1) & 1);
//	}
//	return 0;
//}	
//void print(int *arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
void oppsite(char *arr,int sz)
{
	char* left = arr;
	char* right = arr + sz - 2;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "hello bit";
	int sz = sizeof(arr) / sizeof(arr[0]);
	oppsite(arr,sz);
	printf("%s", arr);
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	scanf("%d%d", &a, &n);
	for (i = 0; i<n; i++)
	{
		b = b * 10 + a;
		sum += b;
	}
	printf("%d\n", sum);

	return 0;
}
