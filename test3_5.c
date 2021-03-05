#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void reserve(char *left, char *right)
{
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
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reserve(arr, arr + len - 1);
	char *str = arr;
	char *start = arr;
	while (*start != '\0') 
	{
		str = start;
		while (str != ' '&&str!='\0')
		{
			str++;
		}
		char *end = str;
		reserve(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	return 0;
}