#define _CRT_SECURE_NO_WARNINGS 1
#include<list>
#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
template<class con>
void PrintContainer(const con& c)
{
	con::const_iterator it = c.begin();
	while (it != c.begin())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}
void test_list1()
{
	list<int>lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	list<int>::iterator it = lt.begin();
	int a[] = { 16, 9, 8, 4 };
	vector<int> v(a, a + 4);
	sort(v.begin(), v.end());//����
	sort(v.begin(), v.end(), greater<int>());//����
	sort(a, a + 4);
	//sort�ĵײ��õ��ǿ��ţ�����Ҫ���������������������������
	//sort(lt.vegin(),lt.end() )

}
int main()
{
	return 0;
}