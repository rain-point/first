#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
//#include<limits.h>
//int main()
//{
//	int a = INT_MAX;
//    return 0;
//}
//int main()
//{
//	int a, b;
//	int mid = a + (b - a) / 2;//��ƽ��������һ��д������ֹ�������
//	return 0;
//}
//int main()
//{
//	char arr1[] = {"welcome to bit!!!"};
//	char arr2[] = {"#################"};
//	char buf[] = "bit";
//	//{b i t \0}
//	//sizeof(buf)/sizeof(buf[0])-2;
//	//strlen(buf)-1;
//	int left = 0;
//	int right=strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//      left++;
//      right--;
//	    printf("%s", arr2);
//	}	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������");
//		scanf("%s", password);
//      �����ַ����ıȽϲ�����==����strcmp����
//		for (i = 1; i <= 3; i++)
//		{
//			if(strcmp=(password,"123456")==0)
//{
//          printf("������ȷ\n");
//}
//          else
//{
//          printf("�������\n");
//}
//		}
//	}
//	return 0;
//}
//void menu()
//{
//	printf("****************\n");
//	printf("********1.play***\n");
//}
//void game()
//{
//	//1.�����������1-100��
//	
//	int ret = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("�������");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//	//rand()
//	//2.������
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//   do
//   {
//	   menu();
//	   printf("��ѡ��1/0��");
//	   scanf("%d", &input);
//	   switch (input)
//	   {
//	   case 1:
//			   game();
//			   break;
//	   case 0:
//		   printf("�˳���Ϸ\n");
//			   break;
//	   default:
//		   printf("ѡ�����\n");
//		   break;
//	   }
//   } while (input);
//	return 0;
//}

//�ػ�����
//1�����ڹػ�
//1���������룺������ȡ���ػ�
int main()
{   //shutdown -s -t 60 60���ػ�
	//shutdown -aȡ���ػ�
	char input[20] = { 0 };
again:
	system("shutdown -s -a 60");//����ʱ��ʼ�ػ�
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}