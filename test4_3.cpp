#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* pf = fopen("TestDemo2.java", "r");
	if (pf == NULL)
	{
		printf("打开文件失败\n");
		printf("%s\n", strerror(errno));//提示错误内容
		return 1;
	}
	//打开文件成功
	printf("打开文件成功");
	//读写文件
	fclose(pf);
	pf = NULL;
	return 0;
}
int main()
{
	//fopen函数如果以写的形式打卡
	//如果文件不存在，会创建这个文件
	//如果文件存在，会清空文件的内容
	//fopen函数如果是以读的方式打开
	//文件不存在，打开失败
	FILE* pf = fopen("data.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerrno(errno));
		return 1;
	}
	//写文件
	int i = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		fputc(i, pf);
	}
	int ch = 0;
	while ((ch = fgetc(pf) != EOF))
	{
		printf("%c ", ch);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
int main()
{
	FILE * pf = fopen("data.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerrno(errno));
		return 1;
	}
	//写一行数据
	fputs("hello bit\n", pf);
	return 0;
}
int main()
{
	FILE * pf = fopen("data.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerrno(errno));
		return 1;
	}
	//写一行数据
	fputs("hello bit\n", pf);
	return 0;
}
