#define _CRT_SECURE_NO_WARNINGS 1
#include<ostream>
int Add(int a, int b)
{
	int c = a + b;
	return c;
}
int main()
{
	int ret = Add(1, 2);
	return 0;
}