#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu
{
	//成员变量
	char name[20];
	int age;
	char tele[12];
	char sex[5];
};
int main()
{
	struct Stu s;//学生
	return 0;
}
struct point
{
	int x;
	int y;
};
struct S
{
	char arr[10];
	struct point p;
	double d;
	int *p;
};
int main()
{
	//struct point p = { 1, 2 };
	//printf("%d %d\n", p.x, p.y);
	int a = 2021;
	struct S s = { "abcdef", { 2, 3 }, 3.14,&a };
	printf("%s %d %d %lf %d\n", s.arr, s.p.x, s.p.y,s.d,s->p);

	return 0;
}