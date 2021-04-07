#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void SListPrint(SLTNode *plist)
{
	SLTNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
SLTNode* BuySLTNode(SLDataNode x)
{
	SLTNode* node = (SLTNode*)malloc(sizeof(SLTNode));
	node->data = x;
	node->next = NULL;
	return node;
}
void SListPushBack(SLTNode* plist, SLDataNode x)
{
	SLTNode* tail = plist;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	SListNode*
}