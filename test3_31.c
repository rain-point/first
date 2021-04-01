#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int missingNumber(int *nums, int numsSize){
	int n = numsSize + 1;
	int ret1 = 0;
	for (int i = 0; i < n; ++i)
	{
		ret1 += i;
	}
	int ret2 = 0;
	for (int j = 0; j < numsSize; ++j)
	{
		ret2 += nums[j];
	}
	return ret1 - ret2;
}
int main()
{
	int nums[] = { 1, 2, 3, 4, 5, 6, 7, 9 };
	int numSize = sizeof(nums) / sizeof(nums[0]);
	int ret = missingNumber(nums, numSize);
	return 0;
}