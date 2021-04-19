#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
void StackInit(Stack* pst)
{
	pst->a = (STDataType*)malloc(sizeof(STDataType)*4);
	pst->top = 0;
	pst->capacity = 4;
}
void StackPush(Stack* pst, STDataType x)
{
	if (pst->top == pst -> capacity)
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
	pst->a[pst->top] = x;
	pst->top--;
}
void StackPop(Stack* pst)
{
	pst->top--;
}
STDataType StackTop(Stack* pst)
{
	return 
}