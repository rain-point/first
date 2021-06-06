#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//class B
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//	int _x;
//};
//class A
//{
//private:
//	int _a;
//	int* _p;
//
//	B _b;
//};
//int main()
//{
//	A aa;//默认构造函数
//	return 0;
//}
struct StackC
{
	int *_a;
	int _top;
	int _capacity;
};
void StackInit(struct StackC*ps, int n);
void StackDestory(struct StackC* ps);
void StackPush(struct StackC*ps, int x);
void TestStakcC()
{
	struct StackC st;
	StackInit(&st, 4);
	StackInit(&st, 1);
}
class Stack
{
public:
	Stack(int n = 4)
	{

	}
private:
	int *_a;
	int _top;
	int _capacity;
};