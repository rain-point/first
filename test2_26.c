#define _CRT_SECURE_NO_WARNINGS 1
#define M(x,y,z) x*y+z
main()
{
	int a = 1, b = 2, c = 3;
	printf("%d\n", M(a + b, b + c, c + a));
}
int fun(int x)
{
	int countx = 0;
	while (x)
	{
		countx++;
		x = x & (x-1);
	}
	return countx;
	int main()
	{
		unsigned int
			value = 1024;
		bool condition =
			*((bool *)(&value));
		if (condition)
			value += 1; condition = *((bool *)(&value));
		if (condition)
			value += 1; condition = *((bool *)(&value));
		return 0;
	}