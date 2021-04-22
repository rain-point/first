#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k){
	struct ListNode* fast = pListHead, *slow = pListHead;
	//fast先走k步
	while (k--)
	{
		//说明k比链表长度要大，那么倒数第K个就是空
		if (fast == NULL)
		{
			return NULL;
		}
		fast = fast->next;
	}
	while (fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;
	struct ListNode* head = NULL, *tail = NULL;
	//先取一个小的去做第一个节点，方便后面尾插
	if (l1->val < l2->val)
	{
		head = tail = l1;
		l1 = l1->next;
	}
	else
	{
		head = tail = l2;
		l2 = l2->next;
	}
	while (l1 && l2)
	{
		if (l1->val < l2->val)
		{
			tail->next = l1;
			l1 = l1->next;
		}
		else
		{
			tail->next = l2;
			l2 = l2->next;
		}
		tail = tail->next;
	}
	if (l1)
	{
		tail->next = l1;
	}
	if (l2)
	{
		tail->next = l2;
	}
	return head;
}
int main()
{
	ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n2 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n3 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n4 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n5 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n6 = (ListNode*)malloc(sizeof(ListNode));
	ListNode* n7 = (ListNode*)malloc(sizeof(ListNode));
	n1->val = 2;
	n1->val = 4;
	n1->val = 9;
	n1->val = 3;
	n1->val = 2;
	n1->val = 1;
	n1->val = 6;
	
	n1->next = n2;
	n1->next = n3;
	n1->next = n4;
	n1->next = n5;
	n1->next = n6;
	n1->next = NULL;
}