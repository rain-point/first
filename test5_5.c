#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pf = fopen("TestDemo2.java", "r");
	if (pf == NULL)
	{
		printf("���ļ�ʧ��\n");
		printf("%s\n", strerror(errno));//��ʾ��������
		return 1;
	}
	//���ļ��ɹ�
	printf("���ļ��ɹ�");
	//��д�ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
