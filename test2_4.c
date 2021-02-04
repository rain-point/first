#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char *my_strcat(char*dest, const char*src)
{
	char *ret = dest;
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
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}
my_strcmp(const char*s1, const char*s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	if (*s1 > *s2)
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
	int ret=my_strcmp("abq", "abcdef");

	return 0; 
}

int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bcd";
	strstr(arr1, arr2);//在arr1中查找arr2字符串第一次出现的位置
    
	return 0;
}