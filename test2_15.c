#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char*s1, const char*s2)
{
	assert(s1&&s2);
	while (*s1==*s2)
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
	char *p = "abcdef";
	int ret = my_strcmp("abq", "abcdef");
	printf("%d\n", ret);
	return 0;
}

int main()
{
	char arr1[20] = "##########";
	char arr2[] = "abcdef";
	strncpy(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}
int main()
{
	char arr1[] = "abcdefghi";
	char arr2[] = "bcd";
	char *ret=strstr(arr1, arr2);//在arr1中找arr2字符串第一次出现的位置
	if (ret != NULL)
	{
		printf("%s\n", ret);
	}
	else
		printf("找不到字符串\n");
	return 0;
}
char *my_strstr(const char*s1, const char*s2)
{
	char*cp = s1;
	while (*cp)
	{
		char*p1 = cp;
		char*p2 = s2;
		while ((*p1!='\0')&&(*p1 == *p2)&&(*p1==*p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}
#include<errno.h>
int main()
{
	FILE*pf=fopen("test.txt","r");//file open
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	return 0;
}