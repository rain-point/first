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
//	switch (i)//switch放的是整型表达式,字符也可因为字符的asll码值也是整形
//	{
//	case 1://case后放的是整型常量表达式
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	default:
//		printf("选择错误");
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
//			/*break;*///终止循环
//			continue;
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar-从键盘读取一个字符
//	{
//		putchar(ch);//打印一个字符
//	}
//	return 0;
//}
//int main()
//{
//	char password[10] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	//清理一下缓冲区
//	int ch = 0;
//	while((ch = getchar()) != '\n')
//	{ 
//		;
//	}
//	printf("请确认");
//		ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功/n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0,j=0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//如果不初始化的话j第二次进入循环还是上一次的值
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
//for循环的三个部分都可以省略
//判断部分如果省略的表示恒为真
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
//			printf("找到了，下标是：%d", t);
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
