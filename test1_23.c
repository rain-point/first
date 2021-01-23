#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void Fun(int i)
//{
//	if (i / 10 == 0)
//	{
//		printf("%d\n", i);
//	}
//	else
//	{
//		Fun(i / 10);
//		printf("%d\n", i% 10);
//	}
//
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	Fun(i);
//	return 0;
//}
//int mix(int i)
//{
//	if (i <= 1)
//	{
//		return 1;
//	}
//	else 
//	{
//		i = i*mix(i - 1);
//		return i;
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = mix(i);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int j = 0;
//	scanf("%d", &i);
//	for (j = 1; j <= i; j++)
//	{
//		sum = j*sum;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int my_strlen(char *arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
int my_strlen(char *arr)
{
	int i = 0;
	int count = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
//int main()
//{
//	char arr[] = "hello world";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
void reverse_string(char* arr)
{
	int right = my_strlen(arr);
	int left = 0;
	if (arr[right] <= arr[left])
	{
		printf("%s\n", *arr);
	}
	else
	{
		arr[left] = arr[*arr+1];
		reverse_string(arr + 1);
	}
}
int main()
{   
	char arr[] = "abcdef";
	reverse_string(arr);
	return 0;
}