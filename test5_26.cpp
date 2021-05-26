#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
//typedef int STDataType;
//struct Stack
//{
//	void Init(int initSize = 4)
//	{
//		a = (STDataType*)malloc(sizeof(STDataType)*initSize);
//		size = 0;
//		capacity = initSize;
//	}
//	void Push(STDataType x)
//	{
//		a[size] = x;
//		size++;
//	}
//	STDataType* a;
//	int size;
//	int capacity;
//	 
//};
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	st.Push(2);
//	st.Push(3); 
//	return 0;
//}
using namespace std;
class Date
{
public:
	void Init(int year, int month, int day)
	{
		year = year;
	}
private:
	int year;
	int month;
	int day;
};
int main()
{
	Date d1;
	d1.Init(2021, 5, 24);
	Date d2;
	d2.Init(2021, 5, 25);
	return 0;
}