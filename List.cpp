#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
ListNode* BuyListNode(LTDataType X)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->next = NULL;
	node->prev = NULL;
	return node;
}
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}
void ListPushBack(ListNode* phead, LTDataType x)
{
	ListNode* tail = phead->prev;
	ListNode* newnode = BuyListNode(x);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}
void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void LishPushFront(ListNode* phead, LTDataType x)
{
	ListNode* first = phead->next; 
	ListNode* newnode = BuyListNode(x);
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;
}
void ListPopBack(ListNode* phead)
{
	ListNode* tail = phead->prev;
	ListNode* tailPrev = tail->prev;
	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;
}