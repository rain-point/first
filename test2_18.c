#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
int main(){
	int a[10] = { 10, 52, 63, 98, 8, 3, 5, 7, 11, 2 };
	int length = 10;
	int i, j;
	int temp;

	for (i = 1; i<length; i++)
	for (j = 0; j<length - i; j++)
	{
		if (a[j]>a[j + 1]){
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;

		}
	}

	for (i = 0; i<length; i++)
		printf("%d  ", a[i]);
}
int my_strlen(const char*str)//字符串长度是不变的，用const修饰
{
	assert(str != NULL);//assert断言
	int ret = 0;
	while (*str != '\0')
	{
		ret++;
		str++;
	}
	return ret;
}
int main()
{
	char* str = "abcdef";
	printf("%d\n", my_strlen(str));
	return 0;
}
int my_strlen(const char* str)
{
	assert(str != NULL);
	const char*start = str;//存放起始位置
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	char* str = "abcdef";
	printf("%d\n", my_strlen(str));
	return 0;
}
