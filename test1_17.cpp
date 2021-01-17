#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a, b, c,max,mid,least;
//	scanf("%d %d %d", &a, &b, &c);
//		if (a > b&&a > c)
//		{
//			max = a;
//			if (b > c)
//			{
//				mid = b;
//				least = c;
//			}
//			else
//			{
//				mid = c;
//				least = b;
//			}
//		}
//		else if (b > a&&b > c)
//		{
//			max = b;
//			if (a > c)
//			{
//				mid = a;
//				least = c;
//			}
//			else
//			{
//				mid = c;
//				least = a;
//			}
//		}
//		else
//		{   
//			max = c;
//			if (a > b)
//			{
//				mid = a;
//				least = b;
//			}
//			else
//			{
//				mid = b;
//				least = a;
//			}
//
//		}
//		printf("%d %d %d", max, mid, least);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0);
//		printf("%d", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b,i;
//	scanf("%d %d", &a, &b);
//	for (i = 2; i < a&&i < b; i++)//i等于2的原因是1是所有数的最小公倍数
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	printf("%d", (a*b) / i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum = sum + (i%j)*(i / j);
//		}
//		if (i==sum)
//		printf("%d\n", sum);
//	}
//	return 0;
//}

 int main()  /* 相减法求最大公约数 */
 {
	    int m, n, a, b, c;
	    printf("Input two integer numbers:\n");
	    scanf("%d,%d", &a, &b); m = a; n = b;
	      /* a, b不相等，大数减小数，直到相等为止。*/
		    while (a != b)
		          if (a>b)  a = a - b;
	          else  b = b - a;
	    printf("%d\n", a);
	    printf("%d\n", m*n / a);
 }