#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int *singLeNumber(int *nums, int numsSize, int* returnSize)
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	for (int i = 0; i < numsSize; ++i)
//	{
//		ret ^= nums[i];
//	}
//	int j = 0;
//	for (; j < 32; ++j)
//	{
//		if (ret&(1 << j))
//			break;
//	}
//	for (int k = 0; k < numsSize; ++k)
//	{
//		if (nums[k] & (1 << j))	
//		{
//			x ^= nums[k];
//		}
//		else
//		{
//			y ^= nums[k];
//		}
//	}
//	int *arr = (int *)malloc(sizeof(int)* 2);
//	arr[0] = x;
//	arr[1] = y;
//	*returnSize = 2;
//	return arr;
//}
#include"SeqList.h"
void TestSeqList1()
{
	SeqList s;
	SeqListInit(s);
}