#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
		}
		     else
		    {
				 prev->next = next;
				 free(cur);
				 cur = next;
		     }
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return head;
}
struct ListNodde* reverseList(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	struct ListNode* n1 = NULL, n2 = head, n3 = head->next;
	while (n2)
	{
		//·­×ª
		n2->next = n1;
		//µü´ú
		n1 = n2;
		n2 = n3;
		if (n3)
		{
			n3 = n3->next;
		}
		return n1;

	}
}
struct ListNode* middleNode(struct ListNode* head)
{
	struct ListNode* fast = head, *slow = head;
	while (fast&&fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
struct ListNode* FindKthToTail(strcut ListNode* PListHead, int k)
{
	struct ListNode* fast = PListHead, *slow = PListHead;
	while (k--)
	{
		fast = fast->next; 
		if (fast == NULL)
		{
			return NULL;
		}
	}
	while (fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
}