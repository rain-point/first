#define _CRT_SECURE_NO_WARNINGS 1
void SListPushBack(SLTNode** plist, SLTDataType x)
{
	if (plist == NULL)
	{
		plist = newnode;
	}
	else
	{
		SLTNode* tail = plist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		SListNode *newnode = BuySLTNode(x);
		tail->next = newnode;
	}
}
void SListPopBack(SLTNode* plist)
{
	if (*pplist == NULL)
	{
		return;
	}
	else if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SLTNode* prev = NULL;
		SLTNode* tail = plist;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}
