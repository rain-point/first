#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
#include <stdio.h>
struct Stu
{
	char name[10];
	int age;
	char sex[5];
	double score;
};
void set_age1(struct Stu stu)
{
	stu.age = 18;
}
void set_age2(struct Stu* pStu)
{
	pStu->age = 18;//结构成员访问
}
int main()
{
	struct Stu stu;
	struct Stu* pStu = &stu;//结构成员访问

	stu.age = 20;//结构成员访问
	set_age1(stu);

	pStu->age = 20;//结构成员访问
	set_age2(pStu);
	return 0;
}
