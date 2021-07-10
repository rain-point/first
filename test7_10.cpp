#define _CRT_SECURE_NO_WARNINGS 1
#include<ostream>
int missingNumber(int *nums, int numsSize)
{
	//int n = numsSize + 1;
	//int ret1 = 0;
	//for (int i = 0; i < n; i++)
	//{
	//	ret1 += i;
	//}
	//int ret2 = 0;
	//for (int j = 0; j < numsSize; ++j)
	//{
	//	ret2 += nums[j];
	//}
	//return ret1 - ret2;
	int x = 0;
	for (int i = 0; i < numsSize + 1; i++)
	{
		x^=i;
		if (i < numsSize)
		{
			x ^= nums[i];
		}
	}
	return x;
}
int *singleNumbers(int *nums, int numsSize, int *returnSize){
	int *arr = (int *)malloc(sizeof(int)* 2);
	int ret = 0;
	*returnSize = 2;
	for (int i = 0; i < numsSize; i++)
	{
		ret ^= nums[i];
	}
	return arr;
}
int *singleNumber(int *nums, int numsSize, int *returnSize){
	int x = 0, y = 0;
	int ret = 0;
	for (int i = 0; i < numsSize; i++)
	{
		ret^nums[i];
	}
	//从低到高去找ret里面一个为1的位
	int j = 0;
	for (; j < 32; j++)
	{
		if (ret&(1 << j))
		{
			break;
		}
	}
	//将原数组分为两组，第j位为1为a组，第J位为0的为b组
	//x和y一定会分别进入a,b两组，其他出现两次的数，要么进入a组，要么进入b组
	for (int k = 0; k < numsSize; k++)
	{
		if (nums[k] & (1 << j))
		{
			x^nums[k];
		}
		else
		{
			y^nums[k];
		}
	}
	int *arr = (int *)malloc(sizeof(int)* 2);
	arr[0] = x;
	arr[1] = y;
	*returnSize = 2;
	return arr;
}
#pragma once
typedef int SeqDataType;

struct SeqList
{
	int* a;
	int size;
	int capacity;
};
void SeqListInit(SeqList* seq)
{
	seq.a = NULL;
	seq.size = seq.capacity = 0;
}
//内存中管理数据的结构增删查改的接口
void SeqListPushBack(struct SeqList* seq, SeqDataType x)
{
	if (seq->size == seq->capacity)
	{
		int newcapacity = seq->capacity * 2;
		SeqDataType* newA = realloc(seq->a, sizeof(SeqDataType)*newcapacity);
		if (newA = NULL)
		{
			printf("realloc fail\n");
			exit(-1); 
		}
		seq->a = newA;
		seq->capacity = newcapacity;
	}
	seq->a[seq->size] = x;
	seq->size++;
}
void SeqListDestory(SeqList* pq)
{
	free(seq->a);
	seq->a = NULL;
	seq->capacity = seq->size = 0;
}
void SeqListPushFront(struct SeqList* seq, SeqDataType x)
{
	int end = seq->size - 1;
	while (end >= 0)
	{ 
		seq->a[end + 1] = seq->a[end];
	}
	seq->a[0] = x;
	seq->size++;
}
void SeqListPopBack(struct SeqList* seq)
{
	--seq->size;
}
void SeqListPopFront(struct SeqList* seq)
{
	int begin = 0;
	while (begin < seq->size - 1)
	{
		seq->a[begin] = seq->a[begin + 1];
	}
	seq->size--;
}
int SeqListFind(SeqList* seq, int x)
{
	for (int i = 0; i < seq->size; i++)
	{
		if (seq->a[i] == x)
		{
			return i;
		}

	}
	return -1;
}
void SeqListInsert(SeqList* seq, int pos, SeqDataType x)
{
	int end = seq->size - 1;
	while (end >= pos)
	{
		seq->a[end + 1] = seq->a[end];
		--end;
	}
	seq->a[pos] = x;
	seq->size++;
}
void SeqListErase(SeqList* seq, int pos)
{
	int begin = pos;
	while (begin <= seq->size - 1)
	{
		seq->a[begin] = seq->a[begin + 1];
		begin++;
	}
}
