#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
void HeapInit(HP* php, HPDataType* a, int n)
{
	php->a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	if (php->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	php->size = n;
	php->capacity = n;
}
void HeapDestroy(HP* php);
void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);
HPDataType HeapTop(HP *php);
int HeapSize(HP* php);
