#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
#pragma pack(1)//����Ĭ�϶�����
#pragma pack()//�ָ�Ĭ�϶�����
struct S1
{
	char c1;
	int i;
	char c2;
};
//offsetof -������ǽṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
struct S3
{
	double d;
	char c;
	int i;
};
int main()
{
	struct S1 s1;
	printf("%d\n", offsetof(struct S1, c1));
	printf("%d\n", sizeof(struct S3));	
	return 0;
}
struct A
{
	int _a : 2;//_aֻ��Ҫ��������λ
	int _b : 5;//_bֻ��Ҫ5������λ
	int _c : 10;
	int _d : 30;
};
int main()
{
	printf("%d\n", sizeof(struct A));
	return 0;
}
//����һ��ö������

enum Sex
{   //ö�����͵Ŀ���ȡֵ
	MALE,
	FEMALE,
	SECRET
};
enum RGB
{
	RED,//0
	GREEN,//1
	BLUE//2
};
int main()
{
	enum Sex s = MALE;
	enum RGB rgb = GREEN;
	printf("%d\n", RED);
	printf("%d\n", GREEN);
	printf("%d\n", BLUE);
	return 0;
}
enum option
{
	EXIT,
	ADD, 
	SUB,
	MUL,
	DIV
};
union Un
{
	char c;
	int i;
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	
	return 0;
}