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
