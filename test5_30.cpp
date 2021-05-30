#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	bool Equel(Date d)
//	{
//		return _year == d._year
//		&& _month == d._month
//		&&_day == d._day;
//	} 
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2021, 1, 1);
//	Date d2(2021, 1, 2);
//	return 0;
//}
class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;
	Date d2(d1);
	return 0;
}