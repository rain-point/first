#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_strcpy(char *arr1, char *arr)
{
	while (*arr != '\0')
	{
		*arr1++ = *arr++;
	}
	*arr1 = *arr;
}
int main()
{
	char arr2[] = "abcdef";
	char arr1[] = "qqqqqqqqqqqqqqq";
	my_strcpy(arr1, arr2);
	return 0;
}
int my_strlen(char *arr)
{
	char *p = arr;
	while (*arr != '\0')
	{
		arr++;
	}
	return arr - p;
}
int main()
{
	char arr[] = "abcdef";
	my_strlen(arr);
	return 0;
}
char *my_strstr(const char *s1, const char *s2)
{
	char *cp = s1;
	while (*cp)
	{
		const char *p1 = cp; 
		const char *p2 = s2;
		while ((*p1!='\0')&&(*p2!='\0')&&(*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL; 
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bcd";
	char *ret = my_strstr(arr1, arr2);
	return 0;
}
void*my_memecpy(void*dest, void *src, size_t count)
{
	void*ret = dest;
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
	my_memecpy(arr2, arr1, 16);
	return 0;
}
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
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
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(arr + 2, arr, 16);
}
int cmp_int(const void*e1, const void*e2)
{
	return (*(int*)e1 - *(int*)e2);
}
void test1()
{
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
}
int main()
{
	test1();
	return 0;
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void**e1, const void*e2)
{
	 return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test2()
{
	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 }};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0], cmp_stu_by_age));
}
int main()
{
	test2();
	return 0;
}
void _swap(char*buf1, char*buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void *base ,size_t sz,size_t width,int (*cmp)(const void *e1,const void *e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}