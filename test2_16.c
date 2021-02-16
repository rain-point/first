#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void my_memecpy(void*dest, const void *src, size_t count)
{
	void *ret = dest;
	assert(dest&&src);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[20] = { 0 };
	my_memcpy(arr2, arr1, 16);
	return 0;
}
my_memeove(void* dest, const void* src, size_t count)
{
	void* start = dest;
	if (dest < src)
	{
		// 从前向后拷贝
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		// 从后向前拷贝
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return start;
}
void test3()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memeove(arr + 2, arr, 16);
}
int main()
{
	test3();
	return 0;
}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 5, 6, 7 };
	int ret=memcmp(arr1, arr2, 8);
	return 0;
}