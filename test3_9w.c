#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[10] = { 0 };//��ջ��������40���ֽڵĿռ�
//	//��̬�ڴ�Ŀ��� �ڶ�����
//	int *p = (int *)malloc(40);//ϣ����40���ֽڵ���һ��10�����͵�����
//	if (p == NULL)
//	{
//		printf("�ڴ濪��ʧ��\n");
//		return 1;
//	}
//	else
//	{
//		//���ٳɹ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for(i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//		//����ʹ��pָ����ڴ�
//		//�ֶ��ͷŶ�̬���ٵ��ڴ�
//		free(p);
//		p = NULL;
//	}
//	//��̬�ڴ�Ļ��գ�
//	//1.�������ʱ���Զ�����
//	//2.�ֶ����գ�
//	return 0;
//}
//malloc���ٵĿռ䲻��ʼ��
//malloc����ֻ��һ��
//��calloc���ٵĿռ��ǳ�ʼ����
//��calloc�Ĳ���������
int main()
{
	int *p = (int *)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", (p + i));
		}
		//�ռ䲻���ˣ����ӿռ�
		realloc(p,80);//�����ռ��С
		free(p);
		p = NULL;
	}
	return 0;
}
int main()
{
	int*p = malloc(INT_MAX);
	//p�п���Ϊ��ָ�룬��ΪNULL��ʱ��*p���ǷǷ������ڴ�
	return 0;
}
//2.Խ�����
int main()
{
	int *p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	else
	{
		int i = 0;
		for (i = 0; i <= 10; i++)
		{
			*(p + i) = 0;
		}
		free(p);
		p = NULL;
	}
	return 0;
}