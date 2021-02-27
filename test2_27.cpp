#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	enum team { my, your = 9, his, her = his + 3 };
	printf("%d %d %d %d\n", my, your, his, her);
	return 0;

}
int func(int a)
{
	int b;
	switch (a)
	{
	case 1: b = 30;
	case 2: b = 20;
	case 3: b = 16;
	default: b = 0;
	}
	return b;
}
void swap_int(int *a, int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
#include <stdio.h>
int main(){
	long long a = 1, b = 2, c = 3;
	printf("%d %d %d\n", a, b, c);
	return 0;
}
