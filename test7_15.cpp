#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
class Date
{
public:
	void Init(int year,int  month,int day)
	{
		//检查日期的合法性
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;
	d1.Init(2021, 5, 24);
	Date d2;
	return 0;
}