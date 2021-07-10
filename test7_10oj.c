#define _CRT_SECURE_NO_WARNINGS 1
#include<ostream>
int removeElement(int *nums, int numsSize, int val)
{
	int src = 0, dst = 0;
	while (src < numsSize)
	{
		if (nums[src] == val)
		{
			++src;
		}
		else
		{
			nums[dst] = nums[src];
			++src;
			++dst;
		}
	}
	return dst;
}