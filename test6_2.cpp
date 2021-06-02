#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"Date.h"
int main()
{
	Date d1(2021,5,25);
	d1.print();
	Date d2(2021, 0, 0);
	d2.print();
	return 0;
}