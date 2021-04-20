#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct ListNode* removeElements(struct ListNode* head, int val){
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur)
	{
		if (cur->val == val)
		{
			struct ListNode* next = cur->next;
			if (prev == NULL)//cur是头
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
}
struct ListNode* reverseList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode* n1 = NULL, *n2 = head, *n3 = head->next;
	while (n2)
	{
		//翻转
		n2->next = n1;
		//迭代
		n1 = n2;
		n2 = n3;
		if (n3)
		n3 = n3->next;
	}
	return n1;
}
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* fast = head, *slow = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}