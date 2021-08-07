#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v1;
	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0; 
}
void test_vector2()
{
	vector<int> v1;
	vector<int> v2(10, 0);
	vector<int> v3(v2.begin(), v2.end());
	string s("hello world");
	vector<char> v4(s.begin(), s.end());

}