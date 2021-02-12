#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(char *arr)
{
	int count = 0;
	while (*arr!=0)
	{
		arr++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "hello";;
	int ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}
int main()
{
	char arr1[20] = "****************";
	char arr2[] = "hello bit";
	strcpy(arr1, arr2);
	return 0;
}
char* my_strcpy(char *arr1, const char*arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	char *ret = arr1;
	while (*arr2 != '\0')
	{
		*arr1++ = *arr2++;
	}
	*arr1 = *arr2;
	return ret;//返回目标空间的起始地址
}

int main()
{
	char arr1[20] = "****************";
	char arr2[] = "hello bit";
	my_strcpy(arr1, arr2);
	return 0;
}
