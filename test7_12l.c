#define _CRT_SECURE_NO_WARNINGS 1
#include<ostream>
#pragma once
typedef int STDataType;
struct Stack
{
	STDataType* a;
	int top;//Õ»¶¥
	int capacity;//ÈÝÁ¿£¬·½±ãÔöÈÝ
};
typedef struct Stack Stack;
void StackInit(Stack* pst)
{
	pst->a = NULL;
	pst->top = 0;
	pst->capacity = 0;
}
void StackDestory(Stack* pst)
{ 
	free(pst->a);
	pst->a = NULL;
	pst->capacity=pst->top=0 
	 
}
void StackPush(Stakc* pst, STDataType x)
{
	if (pst->top == pst->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(sizeof(STDataType)*pst->capacity * 2);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		pst->a = tmp;
		pst->capacity *= 2;
	}
	pst[a->top] = x;
	pst->top++;
}
void StackPop(Stack* pst);
{
	pst[a->top] = x;
	pst->top++;
}
bool isValid(char* s)
{
	 
}
typedef int QDataType 
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QueueNode;
typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;
void QueueInit(Queue* pq)
{
	pq->head = pq->tail = NULL;
}
void QueueDestroy(Queue* pq)
{
	QueueNode* cur = pq->head;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}
void QueuePush(Queue* pq, QDataType x)
{
	QueueNode* newnode(QueueNode*)malloc(sizeof(QueueNode));
	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	newnode->data = x;
	newnode->next = NULL;
	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue* pq)
{
	if (pq->head->next = NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QueueNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
bool QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);

