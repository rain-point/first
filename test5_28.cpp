#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class A
{
public:
	A(int a = 1)
	{
		_a = a;
	}
private:
	int _a;
};
class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
class Stack
{
private:
	int* _a;
	int _size;
	int _capacity;
};
int main()
{
	Date d;
	Stack st;
	return 0;
}