#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
 char *my_strcat(char*dest, const char*src)
{   //1.找到目标空间的\0
	//2.追加
	assert(dest&&src);
	char*ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
int main()
{
	int ret=strcmp("abq", "abcdef");
	return 0;
}