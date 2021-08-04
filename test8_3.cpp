#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
void test_vector1()
{
	vector<int>v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	for (size_t i = 0; i < v1.size(); ++i)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	vector<int>::iterator it1 = v1.begin();
	while (it1 != v1.end())
	{
		*it1 += 1;
		cout << *it1 << " ";
	}
	cout << endl;
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

}
void test_vector2()
{
	vector<int> v1;
	vector<int> v2(10, 0);
	vector<int> v3(v2.begin(), v2.end());
	string s("hello world");

}
int main()
{
	test_vector1();

	return 0;
}