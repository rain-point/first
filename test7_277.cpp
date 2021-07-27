#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Add
{
public:
	Add() //构造函数
	{
		_num++;
		_ret += _num;
	}
	static int _num; //静态成员变量，存储正在累加的数字
	static int _ret; //静态成员变量，存储1+2+3+...+n的结果
};
//静态成员变量的定义
int Add::_num = 0;
int Add::_ret = 0;
class Solution {
public:
	int Sum_Solution(int n) {
		//多个测试用例，可能会多次调用，做好初始化工作
		//防止第二个测试用例的结果是在第一个测试用例的基础上继续累加得到的
		Add::_num = 0;
		Add::_ret = 0;
		Add* p = new Add[n]; //为n个Add类对象申请空间（可调用n次构造函数）
		return Add::_ret; //返回1+2+3+...+n的结果
	}
};
