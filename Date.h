#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class Date
{
public:
	Date(int year = 0, int month = 1, int day = 0);
	void print();
	Date operator+(int day);

	 
private:
	int _year;
	int _month;
	int _day;
};