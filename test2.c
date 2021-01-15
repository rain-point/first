#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int a, b, c;
//	float p;
//	scanf("%d %d %d", &a, &b, &c);
//	p = (a + b + c) / 2.0;
//	printf("circumference=%.2f area=%.2f", a + b + c, sqrt(p*(p - a)*(p - b)*(p - c)));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a + b>c&&a + c>b&&b + c>a)
//		{
//			if (a == b&&a == c&&b == c)
//				printf("Equilateral triangle!\n");
//			else if (a == b || a == c || b == c)
//				printf("Isosceles triangle!\n");
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int N = 0;
//	int i = 1;
//	int flag = 0;
//	int arr = 1;
//	scanf("%d", &N);
//	while (i<N)
//	{
//		if (i %2 == 0)
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
//	int n, h, m;
//	while (scanf("%d%d%d", &n, &h, &m) != EOF)
//	{
//		if (m%h == 0)
//		{
//			n = n - m / h;
//		}
//		else{
//			n = n - (m / h + 1);
//		}
//		printf("%d", n);
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	float money;
	float sum = 0.0;
	int m, d, q;
	scanf("%f%d%d%d", &money, &m, &d, &q);
	if (m == 11 && d == 11)
	{
		if (q)
		{
			sum = money*0.7 - 50.0;
		}
		else
		{
			sum = money*0.7;
		}
	}
	else if (m == 12 && d == 12)
	if (q)
	{
		sum = money*0.8 - 50.0;
	}
	else
	{
		sum = money*0.8;
	}
	else
	{
		sum = money;
	}
	if (sum<0)
		sum = 0;
	printf("%.2f", sum);
	return 0;
}

