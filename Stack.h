#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;//’ª∂•
	int capacity;//»›¡ø£¨∑Ω±„‘ˆ»›
}Stack;
typedef struct Stack;
void StackInit(Stack* pst);
void StackDestroy(Stack* pst);
void StackPush(Stack* pst, STDataType x);
void StackPop(Stack* pst);
bool StackEmpty(Stack* pst);
int StackSize(Stack* pst);