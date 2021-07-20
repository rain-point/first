#pragma once
namespace nrf
{
	class string
	{
	public:
		string(const char* str = "")
			:_str(new char[strlen(str) + 1])
		{
			strcpy(_str, str);
		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
		}
		string(const string& s)
			:_str(new char[strlen(s._str]+1)
		{
				strcpy(_str, s.str);
		}
		string& operator=(const string& s)
		{
			if (this != &s)
			{
				delete[] _str;
				_str = new char[strlen(s._str) + 1];
				strcpy(_str, s._str);
			}
			return *this;
		}
	private:
		char* _str;
	};
}
void test_string1()
{
	nrf::string s1("hello world");
	nrf::string s2(s1);
}