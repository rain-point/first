#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 0 };
	//��̬�ڴ濪��-������
	int* p = (int *)malloc(40);
	if (p == NULL)
	{
		printf("�ڴ濪��ʧ��\n");//ϣ����40���ֽڵ���һ��10�����͵�����
	}
	else
	{
		//���ٳɹ�
		int i = 0;
		for (i = 0;i < 10; i++)
		{
			*(p + i) = 0;
		}
	}
	return 0;
}
#include<string.h>
#include<errno.h>
int main()
{
	int*p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		//�ռ䲻���ˣ����ӿռ�
		int *ptr = (int*)realloc(p, 80);//�����ռ��С
		for (ptr != NULL)
		{
			p = ptr;
		}
		for (i = 0; i < 20; i++)
		{
			printf("%d ", *(p + i));
		}
		free(p);
		p = NULL;
	}
	return 0;
}
int main()
{
	int *p = (int *)malloc(INT_MAX);
	//p���п���ΪNULLָ��ģ���ΪNULL��ʱ��*P���ǷǷ������ڴ档
}