#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"
int GetMonthDay(int year, int month)
{//����洢ƽ��ÿ���µ�����
	int dayArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = dayArray[month];
	if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))&&month==2)
	{
		day = 29;
	}
	return day;  
}
Date::Date(int year, int month, int day)
{
	//������ڵĺϷ���
	if (year >= 0 && month > 0 && month<13
		&& day>0 && day <= GetMonthDay(year,month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		cout << "�Ƿ�����" << endl;
	}
}
void Date::Print()
{
	cout << _year << "��" << _month << "��" << _day << "��" << endl;
}
Date& Date::operator += (int day)
{
	_day += day;
	while (_day > GetMonthDay(_day, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month > 12)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator+(int day)
{
	Date tmp(*this);
	tmp += day;
	return tmp;

}
Date& Date::operator -= (int day)
{
	_day -= day;;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;

}
Date Date::operator-(int day)
{
	Date tmp(*this);
	tmp -= day;
	return tmp;
}