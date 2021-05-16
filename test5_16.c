 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Stack(int *a)
{
	while (!StackEmpty(&st))
	{
		int left, right;
		right = StackTop(&st);
		left = StackTop(&st);
		StackPop(&st);
		int keyi = PartSort1(a, left, right);
		if (left < keyi - 1)
		{
			StackPush(&st, left);
			StackPush(&st, keyi - 1);
		}
		if (keyi + 1 < right)
		{
			StackPush(&st, keyi + 1);
			StackPush(&st, right);
		}

	}
}