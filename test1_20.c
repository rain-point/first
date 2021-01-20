#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("#################\n");
	printf("######1.play#####\n");
	printf("######0.exit#####\n");
	printf("#################\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("偏大了");
		}
		if (guess < ret)
		{
			printf("偏小了");
		}
		if (guess = ret)
		{
			printf("猜对了");
			break;
		}
	}
}

int main()
{
	int i = 0;
	menu();
	srand((unsigned int)time(NULL));
	scanf("%d", &i);
	do
	{
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
		}while (i);
	
	return 0;
}
#include<stdio.h>
int main()
{
	char a = 0;
	while (scanf("%c", &a) != EOF)
	{
		getchar();
		if (a >= 'A'&&a <= 'Z')
			printf("%c\n", a + 32);
		else
			printf("%c\n", a - 32);

	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c, max;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a >= b&&a >= c)
			printf("%d\n", a);
		else if (b >= a&&b >= c)
			printf("%d\n", b);
		else
			printf("%d\n", c);
	}
	return 0;
}