#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
struct A
{
	int a;
	short b;
	int c;
	char d;
};
struct B
{
	int a;
	short b;
	char c;
	int d;
	struct A e;
}BB;

int main()
{
	printf("%d", sizeof(BB));
	return 0;
}
enum Day//����
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
enum Sex//�Ա�
{
	MALE,
	FEMALE,
	SECRET
};

enum Color//��ɫ
{
	RED,
	GREEN,
	BLUE
};
