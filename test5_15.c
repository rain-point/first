#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int PartSort3(int* a, int left, int right)
{
	int midIndex = GetMidIndex(a, left, right);
	int keyi = left;
	int prev = left, cur = left + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		++cur;
	}
	Swap(&a[keyi], &a[prev]);
	return prev;
}