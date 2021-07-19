#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Solution
{
public:
	bool IsLetter(char ch)
	{
		if ((ch >= 'a' && ch <= 'z')
			|| (ch >= 'A' && ch <= 'Z'))
			return true;
		else
			return false;

	}
	string reverseOnlyLetters(string s){
		size_t begin = 0, end = s.size();
		while (begin < end)
		{
			while (!IsLetter(s[begin]))
				++begin;
			while (!IsLetter(s[end]))
				--end;
			swap(s[begin, s[end]]);
			++begin;
			--end;
		}
	}

};
class Solution
{
public:
	bool IsLetter(char ch)
	{
		if ((ch >= 'a' && ch <= 'z')
			|| (ch >= 'A' && ch <= 'Z')
			||(ch>='0'&&ch<='9'))
			return true;
		else
			return false;

	}
	bool isPalindrome(string s){
		size_t begin = 0, end = s.size() - 1;
		while (begin < end)
		{
			while (begin < end &&
				!IsLetter(s[begin])
				)
			{
				++ begin;
			}
		}
	}
};