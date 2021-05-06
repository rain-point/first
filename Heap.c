#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
void HeapInit(HP* php, HPDataType* a, int n)
{
	assert(php);
	php->a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	if (php->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	memcpy(php->a, a, sizeof(HPDataType)*n);
	php->size = n;
	php->capacity = n;
	//½¨¶Ñ
	for (int i = (php->size - 1 - 1) / 2; i >= 0; --i)
	{

	}
}
void HeapDestroy();
void HeapPush(HP* PHP, HPDataType x);
void HeapPop(HP* php);
HPDataType HeapTop(HP* php);
int HeapSize(HP* php);
bool HeapEmpty(HP*)