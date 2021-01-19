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
//	int mid = a + (b - a) / 2;//求平均数的另一种写法，防止整形溢出
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
//		printf("请输入密码");
//		scanf("%s", password);
//      两个字符串的比较不能用==得用strcmp函数
//		for (i = 1; i <= 3; i++)
//		{
//			if(strcmp=(password,"123456")==0)
//{
//          printf("密码正确\n");
//}
//          else
//{
//          printf("密码错误\n");
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
//	//1.生成随机数（1-100）
//	
//	int ret = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//	//rand()
//	//2.猜数字
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//   do
//   {
//	   menu();
//	   printf("请选择（1/0）");
//	   scanf("%d", &input);
//	   switch (input)
//	   {
//	   case 1:
//			   game();
//			   break;
//	   case 0:
//		   printf("退出游戏\n");
//			   break;
//	   default:
//		   printf("选择错误\n");
//		   break;
//	   }
//   } while (input);
//	return 0;
//}

//关机程序
//1分钟内关机
//1分钟内输入：我是猪，取消关机
int main()
{   //shutdown -s -t 60 60秒后关机
	//shutdown -a取消关机
	char input[20] = { 0 };
again:
	system("shutdown -s -a 60");//倒计时开始关机
	printf("请注意，你的电脑再1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}