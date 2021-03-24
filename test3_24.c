#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//把一个字符串转换为整型
enum State
{
	VALID,
	INVALD
};
int my_atoi(const char *str)
{
	if (str == NULL)
	{
		return 0;
	}
	if (*str == '\0')
		return 0;
}
int main()
{
	printf("%d\n", my_atoi("0"));
	return 0;
}
int main()
{   
	return 0;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 6 };
	int i = 0; 
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num = 0;
	for (i = 0; i < sz; i++)
	{
		num ^= arr[i];
	}
	//找出Num的二进制中的1，找到第一个为1的位就行
	int i = 0;
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if ((num >> i) & 1 == 1)
		{
			pos = i;
			break;
		}
	}
	return 0;
}
#define SWAP(X)
int main()
{
	int a = 10;
	SWAP(a);
	return 0;
}
int main()
{
	FILE* pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		return 1;
	}
	int ch = 0;
	if (ferror(pf))
	{
		printf("读取是发生错误，失败，而结束\n");
	}
	else if (feof(pf))
	{
		printf("遇到文件末尾，而结束的");
	}
	return 0;
}