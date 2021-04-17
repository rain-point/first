#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}ListNode;
ListNode* BuyListNode(LTDataType X);
ListNode* ListInit();
void ListPushBack(ListNode* phead, LTDataType);
void ListPrint(ListNode* phead)
void ListPushFront(ListNode* phead, LTDataType x);