#pragma once
#include<stdio.h>
typedef int SLDataNode;
typedef struct SListNode
{
	SLDataNode data;
	struct SListNode* next;
}SLTNode;
void SListPrint(SLTNode *plist)