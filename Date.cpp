#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"
int GetMonthDay(int year, int month)
{
	int dayArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ((year % 4 == 0 && year % 100 != 0) || (year% 00==0))&&month==2)
	{
		day = 29;
	}
	return dayArray[month];
}
Date::Date(int year, int month, int day)
{
	if (year >= 0
		&& month > 0 && month<13
		&& day>0 && day < 31)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		cout << "非法日期" << endl;
	}
}
Date Date::operator+(int day)
{
	_day += day;
	_month++;

}
void Date::print()
{
	cout << _year << "年" << _month << "月" << _day << "日" << endl;
}