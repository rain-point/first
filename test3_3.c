#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(const char*str)//�ַ��������ǲ���ģ���const����
{
	assert(str != NULL);//assert����
	int ret = 0;
	while (*str != '\0')
	{
		ret++;
		str++;
	}
	return ret;
}
int main()
{
	char* str = "abcdef";
	printf("%d\n", my_strlen(str));
	return 0;
}
#include<Stdio.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char* str = "hello bite";
	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}
#include<stdio.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	const char*start = str;//�����ʼλ��
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	char* str = "abcdef";
	printf("%d\n", my_strlen(str));
	return 0;
}

