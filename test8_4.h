#pragma once
#include<iostream>
namespace nrf
{
	class string
	{
	public:
		typedef char* iterator;
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		string(const char* str = "")
		{
			_str = (new char[strlen(str) + 1]);
			_size = strlen(str);
			_capacity = _size;
			strcpy(_str, str);
		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = 0;
			_capacity = 0;
		}
		//传统写法
		//string(const string& s)
		//	:_str(new char[strlen(s._str)+1])
		//{
		//	strcpy(_str, s._str);
		//}
		//const char* c_str()
		//{
		//	return _str;
		//}
		//string& operator=(const string& s)
		//{
		//	if (this != &s)
		//	{
		//		delete[] _str;
		//		_str = new char[strlen(s._str) + 1];
		//		strcpy(_str, s._str);
		//	}
		//	return *this;
		//}
		void swap(string& s)
		{
			::swap(_str, s._str);
			::swap(_size, s._size);
			::swap(_capacity, s._capacity);
		}
		string(const string& s)
			:_str(nullptr)
			, _size(0)
			, _capacity(0)
		{
			string tmp(s._str);
			swap(_str, tmp._str);
			swap(_size, tmp._size);
			swap(_capacity, tmp._capacity);
		}
		string& operator=(string s)
		{
			swap(_str, s._str);
			swap(_size, s._size);
			swap(_capacity, s._size);
			return *this;
		}
		//遍历
		//读
		const char& operator[](size_t i) const
		{
			return _str[i];
		}
		//可读可写
		char& operator[](size_t i)
		{
			return _str[i];
		}
		size_t size() const
		{
			return _size;
		}
		//开空间，扩展capacity
		void reserve(size_t n)
		{
			if (n > capacity)
			{
				char* tmp = new char[n + 1];
				strcpy(tmp, _str);
				delete[]_str;
			}
		}
		//开空间+初始化，扩展capacity并且初始化空间，size也要动
		void resize(size_t n)
		{
			if (n < _size)
			{
				_size = 3;
				_str[_size] = '\0';
			}
			else
			{
				if (n>_capacity)
				{
					reserve(n);
				}
				for (size_t i = _size; i < n; ++i)
				{
					_str[i] = val;
				}
				_str[n] = '\0';
				_size = n;
			}
		}
		string& insert(size_t pos, char ch)
		{
			if (_size == _capacity)
			{
				reserve(2 * _capacity);
				size_t end = _size;
				while (end >= pos)
				{
					_str[end + 1] = _str[end];
					--end;
				}
				_str[pos] = ch;
				_size++;
				return *this;
			}
		}
		string& insert(size_t pos, char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			char* end = _str + _size;
			while (end >= _str + pos)
			{
				*(end + len) = *end;
				--end;
			}
			strncpy(_str + pos, str, len);
			_size += len;
			return *this;
		}
		void push_back(char ch)
		{
			if (_size == _capacity)
			{
				reserve(_capacity * 2);
			}
			_str[_size] = ch;
			_str[_size + 1] = '\0';
			++_size;
		}
		void append(const char* str)
		{
			size_t len = _size + strlen(str);
			if (len > _capacity)
			{
				reserve(len);
			}
			strcpy(_str + _size, str);
			_size = len;
		}
		string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}
		string& erase(size_t pos, size_t end)
		{
			size_t leftLen = _size - pos;
			//1、剩余字符长度小于要删的长度
			//2、剩余字符长度大于要删的长度
			if (len >= leftLen)
			{
				_str[pos] = '\0';
				_size = pos;
			}
			else
			{
				const char* start = _str + pos+len;
				strcpy(_str + pos, _str + pos + len);
				_size -= len;
			}
		}
		size_t find(char ch, size_t pos = 0)
		{
			for (size_t i = pos; i < _size; ++i)
			{
				if (_str[i] = ch)
				{
					return i;
				}
			}
			return npos;
		}
		size_t find(const char* str, size_t pos = 0)
		{
			const char* ret = strstr(_str, str);
			if (ret)
			{
				return ret - _str;
			}
			else
			{
				return npos;
			}
		}
		bool operator==(const string& s1, const string& s2)
		{
			return strcmp(s1.c_str(), s2.c_str()) == 0;
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		static const size_t npos;
	};
	const size_t string::npos = -1;
}
void f(const string& s)
{
	for (size_t i = 0; i < s.size(); ++i)
	{
		cout << s[i] << endl;
	}
}
void test_string1()
{
	string s1("hello world");
	string s2(s1);
	for (size_t i = 0; i < s1.size(); ++i)
	{
		cout << s1[i] << endl;
	}
}
void test_string3()
{   
	string s1("hello world");
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	return 0;
} 