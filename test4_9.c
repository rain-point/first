#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void SeqListInsert(struct SeqList*pq, int pos,struct SeqDataType x)
{
	assert(pq);
	assert(pos >= 0 && pos < pq->size);
	int end = pq->size - 1;
	while (end >= pos)
	{
		pq->a[end + 1] = pq->a[end];
		--end;
	}
	pq->a[pos] = x;
	pq->size++;
} 
void SeqListErase(struct SeqList* pq, int pos)
{
	assert(pq);
	assert(pos >= 0 && pos < pq->size);
	int begin = pos;
	while (begin <= pq->size - 1)
	{
		pq->a[begin] = pq->a[begin + 1];
		++begin;
	}
	pq->size--;
}