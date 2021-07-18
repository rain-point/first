#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s1;
	string s2("hello bit");
	string s3(s2);
	string s4 = "hello bit";
	string(s4, 3, 5);
	return 0;
}
class solution{
public:
	int firstUniqChar(string s)
	{
		int count[26]= { 0 };
		for (size_t i = 0; i < s.size(); i++)
		{
			count[s[i] - 'a']++;
		}
		for (size_t i = 0; i < s.size(); ++i)
		{
			if (count[s[i] - 'a' == 1]);
			return i;
		}
		return -1;
	}
};
int main()
{
	string s1;
	string s2("hello bit");
	//三种遍历
	//1、下标+[]
	for (size_t i = 0; i < s2.size(); ++i)
	{
		s2[i] = 'x';
	}
	cout << endl;
	for (size_t i = 0; i < s2.size(); ++i)
	{
		cout << s2[i] << " ";
	}
	cout << endl;
	string::iterator it = s2.begin();
	while (it != s2.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	string s3("123456");
	string::reverse_iterator rit = s3.begin;
	while (rit != s3.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
	for (auto e : s3)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;
}
 