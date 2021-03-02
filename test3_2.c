#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x,int y)
{
	return x + y;
}
int main()
{
	int(*pf)(int ,int) = Add;
	int sum = pf(3, 4);
	printf("%d", sum);
	return 0;
}
//struct book
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	short price;
//};
typedef struct book
{
	//成员变量
	char name[20];
	char author[20];
	short price;
}book;
int main()
{
	struct book b1 = { "c语言程序设计","谭浩强",55 };
	printf("%s %s %d\n", b1.name, b1.author, b1.price);
	book b2 = { "c++程序设计", "张三", 45 };
	return 0;
}
typedef struct Node
{
	int data;
	struct Node *Next;
}Node;
struct S
{
	int a;
	int b;
	double d;
};
struct B
{
	char c;
	struct S s;
	short ss;
};
int main()
{
	struct B b = { 'a', { 100, 200, 3.14 }, 5 };
	printf("%lf\n", b.s.d);
	return 0;
}