#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//写一个宏，求两个数的较大值
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
int main()
{
	int a = 10;
	int b = 20;
	//传递给MAX宏的参数是带有副作用的
	int c = MAX(a++, b++);
	int c = MAX(a, b);
	printf("%d\n", c);
	return 0;
}
int main()
{
	int *p = (int *)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	free(p);
	p = NULL;
	return 0;
}
#define __DEBUG__ 1
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
#ifdef __DEBUG__		
		printf("hehe\n");
#endif	
	}
	return 0;
}
int main()
{
#if 2-2
	printf("5\n");
#elif 3-3
	printf("-1\n");
#elif 5-5
	printf("0\n");
#else
	printf("hehe\n");
#endif
	return 0;
}
#define PRINT 0
int main()
{
#ifdef PRINT
	printf("hehe\n");
#endif
	return 0;
}
int main()
{
#if defined(PRINT)
	printf("hehe\n");
#endif
	return 0;
}
struct S
{
	char c;
	int i;
	double d;
};
