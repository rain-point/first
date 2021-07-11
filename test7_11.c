#define _CRT_SECURE_NO_WARNINGS 1
#include<ostream>
void Reverse(int *a, int left, int right)
{
	while (left < right)
	{
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		++left;
		--right;

	}
}
void roat(int *nums, int numsSize, int k)
{
	Reverse(nums, 0, numsSize - k - 1);
	Reverse(nums, numsSize - k, numsSize - 1);
	Reverse(nums, 0, numsSize - 1);
}

void Reverse(int *a, int left, int right)
{
	while (left < right)
	{
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		++left;
		--right;

	}
}
void roat(int *nums, int numsSize, int k)
{
	Reverse(nums, 0, numsSize - k - 1);
	Reverse(nums, numsSize - k, numsSize - 1);
	Reverse(nums, 0, numsSize - 1);
}
void Reverse(int *a, int left, int right)
{
	while (left < right)
	{
		int tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		++left;
		--right;

	}
}
void roat(int *nums, int numsSize, int k)
{
	Reverse(nums, 0, numsSize - k - 1);
	Reverse(nums, numsSize-k, numsSize - 1);
	Reverse(nums, 0, numsSize - 1);
}
struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur)
	{
		if (cur->val == val)
		{
			struct ListNode* next = cur->next;
			if (prev == NULL)
			{
				free(cur);
				head = next;
				cur = next;
			}
			else
		 	{
				prev->next = next;
				free(cur);
				cur = next;
			}
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}
struct ListNode* reverseList(struct ListNode* head)
{
	if (head == NULL || head->next = NULL)
	{
		return head;
	}
	struct ListNode* n1 = NULL,* n2 = head, *n3 = head->next;
	while (n2)
	{
		n2->next = n1;
		n1 = n2;
		n2 = n3->next;
		if (n3)
		{
			n3 = n3->next;
		}
	}

struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* fast = head, *slow = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	
}
int* addToArrayForm(int *A, int Asize, int k, int *returnSize)
{
	int kSize = 0;
	int num = k;
	while (num)
	{
		++kSize;
		num /= 10;
	}
	int len = kSize > ASize ? kSize + 1 : Asize + 1;
	int Ai = Asize - 1;
	int ki = 0;
	int next = 0;//进位
	while (Ai>=0||ki<kSize)
	{
		int aVal = 0;
		if (Ai >= 0)
		{
			aVal = A[Ai];
			int kVal = k % 10;
			k /= 10;
			int ret = aVal + kVal + next;
			if (ret >= 10)
			{
				next = 1;
				ret-=10
			}
			else
			{
				next = 0;
			}
			retArr[reti++] = ret;
		}
		if (next == 1)
			retArr[reti++] = 1;
	}

}
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
	struct ListNode* fast = pListHead, *slow = pListHead;
	//fast先走k步
	while (k--)
	{
		fast = fast->next;

	}
	while (fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

}
ListNode* partition(ListNode* pHead, int x)
{
	struct ListNode* lexxHead, *lessTail, *greaterHead, *greaterTail;
	lessHead = lessTail = (struct ListNode*)malloc(sizeof(struct ListNode));
	greaterHead = greaterTail = (struct ListNode*)malloc(sizeof(struct ListNode));
	lessTail->next = NULL;
	greaterTail->next = NULL;
	struct ListNode* cur = pHead;
	while (cur)
	{
		if (cur->val < x)
		{
			lessTail->next = cur;
		}
		else
		{
			greaterHead->next = cur;
		}
		cur = cur->next;
	}
	lessTail->next = greaterHead->next;
	pHead = lessHead->next;
	free(lessHead);
	free(greaterHead);

}