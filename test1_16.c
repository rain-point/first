#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)//switch�ŵ������ͱ��ʽ,�ַ�Ҳ����Ϊ�ַ���asll��ֵҲ������
//	{
//	case 1://case��ŵ������ͳ������ʽ
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	default:
//		printf("ѡ�����");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (5 == i)
//			/*break;*///��ֹѭ��
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar-�Ӽ��̶�ȡһ���ַ�
//	{
//		putchar(ch);//��ӡһ���ַ�
//	}
//	return 0;
//}
//int main()
//{
//	char password[10] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	//����һ�»�����
//	int ch = 0;
//	while((ch = getchar()) != '\n')
//	{ 
//		;
//	}
//	printf("��ȷ��");
//		ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�/n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0,j=0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//�������ʼ���Ļ�j�ڶ��ν���ѭ��������һ�ε�ֵ
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//forѭ�����������ֶ�����ʡ��
//�жϲ������ʡ�Եı�ʾ��Ϊ��
//int main()
//{
//	int ret=1,sum = 0, i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret*i;
//		sum = ret + sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0,k=7,t;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	
//	while (left<=right)
//	{
//		 t = (right + left) / 2;
//		if (arr[t] > t)
//		{
//			left = t+1;
//		}
//		else if (arr[t] < t)
//		{
//			right = t - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", t);
//			break;
//		}
//	}
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int i = 1;
//	int flag = 0;
//	int arr = 1;
//	scanf("%d", &N);
//	while (i<N)
//	{
//		if (i % 2 == 0)
//		{
//			flag++;
//		}
//		else
//			arr++;
//		i++;
//	}
//	printf("%d %d", arr, flag);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	for (a = 10000; a<100000; a++)
//	{
//		int d = 0;
//		int sum = 0;
//		for (d = 10; d<=10000; d *= 10)
//		{
//			sum = sum + (a / d) * (a%d);
//
//		}
//		if (a == sum)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}
