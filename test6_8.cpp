#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
struct ListNode
{
	ListNode* _next;
	ListNode* _prev;
	int _val;
	ListNode(int val)
		:_next(nullptr)
		, _prev(nullptr)
		, _val(val)
	{}
};
int main()
{
	ListNode* p1 = (ListNode*)malloc(sizeof(ListNode));
	free(p1);
	ListNode* p2 = (ListNode*)operator new(sizeof(ListNode));
	operator delete(p2);

	return 0;
}