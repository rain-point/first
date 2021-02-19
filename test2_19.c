#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
my_strstr(char *arr, char *str)
{
	if ()
}
int main()
{
	char arr[] = "abcdef";
	char str[] = "bcde";
	my_strstr(arr,str);
	return 0;
}
char* my_strcat(char* arr, char *str)
{
	char *start = arr;
	while (*arr)
	{
		arr++;
	}
	while (*arr++=*str++)
	{
		;
	}
	return start;
}
int main()
{
	char arr1[20] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	return 0;
}

int main()
{
	char arr1[20] = "qqqqqqqqqqq";
	char arr2[] = "hello bit";
	return 0;
}
my_strcmp(char *arr1, char *arr2)
{
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	if (*arr1 > *arr2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abq";
	my_strcmp(arr1, arr2);
	return 0;
}
int main()
{
	char arr1[20] = "qqqqqqqqqq";
	char arr2[] = "hello world ";
	return 0;
}