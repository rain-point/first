#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma once
int removeDuplicates(int *nums, int numsSize){
	int dst = 0;
	int cur = 0, next = 1;
	while (next < numsSize)
	{
		if (nums[cur] != nums[next])
		{
			nums[dst++] = nums[cur++]; 
		}
		else
		{
			while (nums[cur] == nums[next])
			{
				++next;
			}
			nums[dst] = nums[cur];
			++dst;
			cur = next;
			++next;

		}
	}
	if (cur < numsSize)
		nums[dst++] = nums[cur];
	return dst;
}
struct SListNode
{
	int data;
	struct SlistNode* next;
};
void SListPrint(SLTNode* plist)
{
	SLTNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d "cur->data);
		cur = cur->next;
	}
	printf("\n");
}
SLTNode *BuySLTNode(SLTDataType x)
{
	SLTNode* node = (SLTNode*)malloc(sizeof(SLTNode));
	node->data = x;
	node->next = NULL;
}
void SListPushBack(SLTNode** plist, SLTDataType x)
{
	if (plist == NULL)
	{
		plist = newnode;
	}
    else
	{
		SLTNode* tail = plist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		SListNode *newnode = BuySLTNode(x);
		tail->next = newnode;
	}
}
void SListPushFront(SLTNode** pplist, SLTDataType x)
{
	SLTNode *newnode = BuySLTNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}
void SListPopBack(SLTNode* plist)
{
	SLTNode* tail = plist;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	free(tail);
	tail = NULL;
}
void SListPopBack(SLTNode* plist)
{
	SLTNode* prev = NULL;
	SLTNode* tail = plist;
	if (*pplist = NULL)
	{
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;

	}
	else{
		while (tail->next != NULL)
		{
			tail = tail->next;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}