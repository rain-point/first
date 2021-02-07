#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void move_num(int arr[], int sz)
{
	//从前往后找一个偶数
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		//从后向前找一个奇数
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		//交换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move_num(arr, sz);
	return 0;
}