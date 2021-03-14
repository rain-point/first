#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu s = { "zhangsan", 20, 99.5 };
	FILE*pf = fopen("data.txt", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	return 0;
}