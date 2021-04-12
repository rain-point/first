#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct ListNode* phead(ListNode* pHead, int x)
{
	ListNode* lessHead, *lessHead, *lessTail, *greaterHead, *greaterTail;
	lessHead = lessTail = (struct ListNode*)malloc(sizeof(struct ListNode));
	greaterHead = greatail = (struct ListNode*)malloc(sizeof(struct ListNode));
	lessTail->next = NULL;
	greaterTail->next = NULL;
	struct ListNode* cur = pHead;
	while (cur)
	{
		if (cur->val < x)
		{
			lessTail->next = cur;
			lessTail = lessTail->next;
		}
		else
		{
			greaterTail->next = cur;
			greaterTail = greaterTail->next;
		}
		cur = cur->next; 
		lessTail->next = greaterHead->next;
		pHead = lessHead->next;
		free(lessHead);
		free(greaterHead);
	}
}
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode *headB)
{
	struct ListNode* curA = headA, *curB = heaB;
	int lenA = 0, lenB;
	while (curA->next)
	{
		curA = curA->next;
		lenA++;
	}
	while (curB->next)
	{
		curB = curB->next;
		lenB++;
	}
	if (curA != curB)
	{
		return NULL;
	}
	struct ListNode* longList = headA, *shortList = headB;
	if (lenB > lenA)
	{
		longList = headB;
		shortList = headA;
	}
	int gap = abs(lenB - lenA);
	while (gap--)
	{
		longList = longList->next;
	}
	while (longList != shortList)
	{
		longList = longList->next;
		shortList = shortList->next;
	}
	return longList;
}