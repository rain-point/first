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
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.Init(2021, 5, 25);
//	Date d2;
//	d2.Init(2021, 5, 21);
//	return 0;
//}
class Stack
{
	Stack(int capacity=4)
	{
		_a = (int *)malloc(sizeof(int)*capacity);
		_size = 0;
		_capacity = capacity;
	}
	~Stack()
	{
		free(_a);
		_a = nullptr;
		_size = _capacity = 0;
	}
private:
	int *_a;
	int _size;
	int _capacity;
};
int main() 
{
	Data d1;
	Stack st1;
	return 0;
}