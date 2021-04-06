#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int removeDuplicates(int *nums, int numSize)
{
	if (numSize == 0)
	{
		return 0;
	}
	int dst = 0;
	int cur = 0, next = 1;
	while (next < numSize)
	{
		if (nums[cur] != nums[next])
		{
			nums[dst++] = nums[cur++];
			++next;
		}
		else
		{
			while (next<numSize && nums[cur] == nums[next])
			{
				++next;
			}
			nums[dst] = nums[cur];
			++dst;
			cur = next;
			++next;
		}
	} 
	if (cur < numSize)
		nums[dst++] = nums[cur];
	return dst;
}
int* addToArrayForm(int *A, int ASize, int k, int *returnSize){
	int kSize = 0;
	int num = k;
	while (num)
	{
		++kSize;
		num /= 10;
	}
	int len = kSize > ASize ? kSize + 1 : ASize + 1;
	int Ai = ASize - 1;
	int Ki = 0;
	while (Ai >= 0 || Ki < kSize)
	{
		int aval = 0;
		if (Ai >= 0)
			aval = A[Ai];
		int kVal = k % 10;
		k /= 10;
		
	}
}
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n){
	int end1 = m - 1, end2 = n - 1;
	int end = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1] > nums2[end2])
		{
			nums1[end--] = nums1[end1--];
		}
		else
		{
			nums1[end--] = nums2[end2--];
		}
		//如果是end2还没结束，还有数据，则继续挪动
		//如果是end1还没结束，不用挪动了
	}
	while (end2 >= 0)
	{
		nums1[end--] = nums2[end1--];
	}
}
void Reverse(int *num, int left, int right)
{
	while (left < right)
	{
		int tmp = num[left];
		num[left] = num[right];
		num[right] = tmp;
		left++;
		right--;
	}
}
void rotate(int *nums, int numsSize, int k)
{
	Reverse(nums, 0, numsSize - k - 1);
	Reverse(nums, numsSize - k, numsSize - 1);
	Reverse(nums, 0, numsSize - 1);
}