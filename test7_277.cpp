#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Add
{
public:
	Add() //���캯��
	{
		_num++;
		_ret += _num;
	}
	static int _num; //��̬��Ա�������洢�����ۼӵ�����
	static int _ret; //��̬��Ա�������洢1+2+3+...+n�Ľ��
};
//��̬��Ա�����Ķ���
int Add::_num = 0;
int Add::_ret = 0;
class Solution {
public:
	int Sum_Solution(int n) {
		//����������������ܻ��ε��ã����ó�ʼ������
		//��ֹ�ڶ������������Ľ�����ڵ�һ�����������Ļ����ϼ����ۼӵõ���
		Add::_num = 0;
		Add::_ret = 0;
		Add* p = new Add[n]; //Ϊn��Add���������ռ䣨�ɵ���n�ι��캯����
		return Add::_ret; //����1+2+3+...+n�Ľ��
	}
};
