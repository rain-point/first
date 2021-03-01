#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int t = 0;
//	int a = 0;
//	while (scanf("%d", &t) != EOF)
//	{
//		if (t > 0)
//		{
//			printf("%d\n", 1);
//		}
//		else if (t==0)
//		{
//			printf("%.1f\n", 0.5);
//		}
//		else
//		{
//			printf("%d\n",0);
//		}
//		
//	}
//	return 0;
//}
int main()
{
	int a = 0, b = 0;
	while (scanf("%d %d", &a, &b)!=EOF)
	{
		if (a > b)
		{
			printf("%d>%d\n", a, b);
		}
		else if (a < b)
		{
			printf("%d<%d\n", a, b);
		}
		else
		{
			printf("%d=%d\n", a, b);
		}
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int ch = 0;
	char s[] = "AaEeIiOoUu";
	while (scanf(" %c", &ch)!=EOF)
	{
		int i = 0;
		for (i = 0; i<10; i++)
		{
			if (ch == s[i])
			{
				printf("Vowel\n");
				break;
			}
		}
		if (i == 10)
			printf("Consonant\n");
	}
	return 0;
}
int main()
{
	int a = 0;
	while (scanf("%d", &a) != EOF)
	{
		if (a % 2 == 0)
		{
			printf("Even\n");
		}
		else
		{
			printf("Odd\n");
		}
	}
	return 0;
}