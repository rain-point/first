#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	char*arr[] = {"abcdef", "hello", "bit" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//		printf("%d", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.����i��λ��N
//		//2.��ȡi��ÿһλ��������ÿһλ��n�η�֮��
//		//3.�жϲ����
//		int tmp = i;
//		int n = 1;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10,n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
int main()
{
	int line = 0;
	scanf("%d", &line);
	//��-line��
	//��-line��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//�ո�
		//*
		int j = 0;
		for (j = 0; i <line-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= 2 * line + 1; j++)
		{
			printf("*");
		}	
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
