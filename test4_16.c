#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void SListPopFront(SLTNode ** pplist)
{
	if (*pplist == NULL)
	{
		return;
	}
	else
	{
		SLTNode* next = (*pplist)->next;
		free(*pplist);
		*pplist = next;
	}
}
void SLTNode* SListFinde(SLTNode* plist, SLTDataType x)
{
	SLTNode* cur = plist;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
}
void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = BuySLTNode(x);
	pos->next = newnode;
	newnode->next = pos->next;
}
void SListInsert(SLTNode* plist, SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = BuySLTNode(x);
	if (pos == *pplist)
	{
		newnode->next = pos;
		*pplist = newnode;
	}
	SLTNode* prev = NULL;
	SLTNode* cur = plist;
	while (cur != pos)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = newnode;
	newnode->next = pos;
}