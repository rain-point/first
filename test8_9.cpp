#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<list>
#include<algorithm> 
#include<vector>
using namespace std;
int main()
{   
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	vector<int>::iterator pos = find(v.begin(), v.end(), 3);
	if (pos != v.end())
	{
		v.insert(pos, 30);
	}
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	
	return 0;
}