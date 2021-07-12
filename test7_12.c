#define _CRT_SECURE_NO_WARNINGS 1
#include<ostream>
bool hasCycle(struct ListNode* head)
{
	struct ListNode* slow = head, *fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			struct ListNode*meet = fast;
			//相遇
			//通过推论证明，一个指针从head走，
			//一个指针从meet走，他们会在入口点相遇.
			while (meet != head)
			{
				meet = meet->next;
				head = head->next;
			}
			return meet;
		}
	}
	return false;
}
#pragma once
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;
ListNode* BuyListNode(LTDataType x)
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
	newnode->next = phead;/
}
void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d",cur->)
	}
}