#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"
void InsertSort(int* a, int n)
{
	//��tmp���뵽�����[0,end]����������
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
	}
}