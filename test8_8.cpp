#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<list>
#include<vector>
#include<sort>
using namespace std;
void test_list1()
{
	list<int> it;
	it.push_back(1);
	it.push_back(2);
	it.push_back(3);
	it.push_back(4);
	list<int>::iterator It = it.begin();
	while (It != it.end())
	{
		cout << *It << " ";
		++It;
	}
	cout << endl;
	int a[] = { 16, 2, 77, 29 };
	list<int> lt1(a, a + 4);
	vector<int> v(a, a + 4);
	sort(v.begin(), v.end());
	//±éÀú·½Ê½2
	for (auto e : it)
	{
		cout << e << " ";
	}
	cout << endl; 
	
}
