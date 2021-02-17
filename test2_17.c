#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* left_move(char*str, int k)
{
	int len = strlen(str);
	char tmp = *str;
	//剩下的Len-1个字符向前挪动
	int i = 0;
	int j = 0;
	for (j = 0; i < k; j++)
	{
		for (i = 0; i < len - 1; i++)
		{
			*(str + i) = *(str + i + 1);
		}
		*(str + len - 1) = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	int k = 2;
	left_move(arr, k);
	printf("%s\n", arr);
	return 0;
}
void reverse(char *left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char* left_move(char*str, int k)
{
	int len = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);
}
int main()
{
	char arr[] = "abcdef";
	int k = 2;
	left_move(arr, k);
	printf("%s\n", arr);
	return 0;
}
int if_left_move(char*s1, char*s2)
{
	int len = strlen(s2);
	while (len--)
	{
		left_move(s2, 1);
		if (strcmp(s1, s2) == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	if (is_left_move(arr2, arr1))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
int is_left_move(char*s1, char*s2)
{
	strcat(s2, s1);
	if (strstr(s2, s1))
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
int find(int *arr[3], int k, int r, int c)
{
	int x = 0;
	int y = c - 1;

	while (x < r&&y>=0)
	{
		if (arr[x][y] < k)
			x++;
		else if (arr[x][y]>k)
			y--;
		else
			return 1;
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 7;
	int ret = find(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}