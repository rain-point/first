#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
