#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	string s1;
	s1.push_back('h');
	s1.push_back('e');
	s1.push_back('l');
	s1.push_back('l');
	s1.push_back('o');
	s1.append("world");
	s1 += ' ';
	s1 += "hello";
	return 0;
}
class b {
public:
	bool is(string s){
		bool is(char ch)
		{
			if (ch >= 'a'&&ch <= 'z')
			{
				return true;
			}
			if (ch >= 'A'&&ch <= 'Z')
			{
				return true;
			}
			return false;
		}
		size_t begin = 0, end = s.size() - 1;
	}
}
