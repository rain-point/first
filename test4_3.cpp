#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
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
int main()
{
	//fopen���������д����ʽ��
	//����ļ������ڣ��ᴴ������ļ�
	//����ļ����ڣ�������ļ�������
	//fopen����������Զ��ķ�ʽ��
	//�ļ������ڣ���ʧ��
	FILE* pf = fopen("data.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerrno(errno));
		return 1;
	}
	//д�ļ�
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
	//�ر��ļ�
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
	//дһ������
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
	//дһ������
	fputs("hello bit\n", pf);
	return 0;
}
