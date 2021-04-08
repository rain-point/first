#pragma once
#include<stdio.h>
#include<assert.h>
typedef int SeqDataType;
typedef struct SeqList
{
	SeqDataType *a;
	int size;
	int capacity;
}SeqList;
void SeqListInit(SeqList *seq);
void SeqListDestory(SeqList *seq);
//ͷ��β�壬ͷɾβɾ
void SeqListPushBack( SeqList* seq, SeqDataType x);
void SeqListPushFront( SeqList* seq, SeqDataType x);
void SeqListPopBack( SeqList* seq);
void SeqListPopFront( SeqList* seq);
void SeqCheckCapacity(SeqList*pq);