#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
template<class T>
template<typename T>
void Swap(T&x1,T &x2)
{
	T tmp = x1;
	x1 = x2;
	x2 = tmp;
}
namespace bit
{
	template<class T>
	class vector
	{
	public:
		vector()
			:_a(nullptr)
			, _size(0)
			, _capacity(0)
		{}
		~vector()
		{
			delete[]_a;
			_a = nullptr;
			_size = _capacity = 0;
		}
		void push_back(const T&x)
		{
			if (_size == _capacity)
			{
				int newcapacity = _capacity == 0 ? 4 : _capacity * 2;
				T* tmp = new T[newcapacity];
				if (_a)
				{
					memcpy(tmp, _a, sizeof(T)*_size);
					delete[]_a;
				}
				_a = tmp;
				_capacity = newcapacity;
			}
			_a[_size] = x;
			++size;
		}
	private:
		T* _a;
		int _size;
		int _capacity;
	};
}
int main()
{
	bit::vector<int> v1;
	bit::vector<double> v2;
	return 0;
}