#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void move_num(int arr[], int sz)
{
	//��ǰ������һ��ż��
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		//�Ӻ���ǰ��һ������
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		//����
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