#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode* removeElements(struct ListNode* head, int val){
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur)
	{
		if (cur->val == val)
		{
			struct ListNode* next = cur->next;
			if (prev == NULL)//curÊÇÍ·
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
