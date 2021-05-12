#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
typedef int HPDataType;
struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
};
typedef struct Heap HP;
void HeapInit(HP* php, HPDataType* a, int n);
void HeapDestroy(HP* php);
void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);
HPDataType HeapTop(HP *php);
int HeapSize(HP* php);
