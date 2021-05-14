#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void BubblsSort(int *a, int n)
{
	 
	for (int end = n; end > 0; --end)
	{
		for (int i = 1; i < n; ++i)
		{
			if (a[i - 1]>a[i])
			{
				Swap(&a[i - 1], &a[i]);

			}
		}
	}
}
int PartSort1(int* a, int left, int right)
{
	int key = a[left];
	while (left < right)
	{
		while (left < right&&a[right] >= key)
		{
			--right;
		}
		a[left] = a[right];
		while (left < right && a[left] <= key)
		{
			++left;
		}
		a[right] = a[left];
	}
}
int main()
{   
	return 0;
}