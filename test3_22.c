#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//void replaceSpace(char *str, int length)
//{
//	int i = 0;
//	int spcount = 0;
//	for (i = 0; i < length; i++)
//	{
//		if (str[i] == ' ')
//		{
//			spcount++;
//		}
//	}
//		int newlen = length + 2 * spcount;
//		int pos = newlen - 1;
//		for (i = length - 1; i >= 0; i--)
//		{
//			if (str[i] == ' ')
//			{
//				str[pos--] = '0';
//				str[pos--] = '2';
//				str[pos--] = '%';
//			}
//			else
//			{
//				str[pos--] = str[i];
//			}
//		}
//}
int main()
{
	FILE* pf=fopen("TestDemo2.java", "r");
	if (pf == NULL)
	{
		printf("打开文件失败\n");
		printf("%s\n", strerror(errno));
		return 1;
	}
	printf("打开文件成功");
	return 0;
}