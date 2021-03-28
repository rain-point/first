#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void InitContact(struct Contact* pc)
{
	pc->sz = 0;
	//memset -�����ڴ��
	memset(pc->data, 0, sizeof(pc->data));
}
void AddContact(struct Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", pc->data[pc->sz].name);
		printf("����������:");
		scanf("%d", &(pc->data[pc->sz].age));
		printf("�������Ա�:");
		scanf("%d", pc->data[pc->sz].sex);
		printf("������绰:");
		scanf("%d", pc->data[pc->sz].tele);
		printf("�������ַ:");
		scanf("%d", pc->data[pc->sz].adrr);

	}
}
void ShowContact(const struct Contact *pc)
{
	int i = 0;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��");
	}
	else
	{
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < pc->sz; i++)
		{
			printf("%15s\t%5s\t%5s\t%12s\t%20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].adrr);
		}
	}
}
static int FindByName(struct Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return 1;
		}
		else 
			return -1;
	}
}
void DelContact(struct Contact* pc)
{
	char name[NAME_MAX] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�û��ɾ��\n");
	}
	else
	{
		//1.�ҵ�Ҫɾ������
		printf("������ɾ���˵�����:");
		scanf("%s", name);
		int pos=FindByName(pc, name);
		if (pos == -1)
		{
			printf("Ҫɾ�����˲�����\n");
		}
		else
		{
			//2.ɾ��
			int j = 0;
			for (j = pos; j <pc->sz-1; j++)
			{
				pc->data[j] = pc->data[j + 1];
			}
		}
	}
}
void SearchContact(struct Contact* pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����");
	}
	else
	{
		int i = 0;
		printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < pc->sz; i++)
		{
			printf("%15s\t%5s\t%5s\t%12s\t%20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].adrr);
		}
	}
}
void ModifyContact(struct Contact* pc)
{
	char name[NAME_MAX];
	printf("������Ҫ�޸��˵����֣�");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:");
		scanf("%s", pc->data[pos].name);
		printf("����������:");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:");
		scanf("%d", pc->data[pos].sex);
		printf("������绰:");
		scanf("%d", pc->data[pos].tele);
		printf("�������ַ:");
		scanf("%d", pc->data[pos].adrr);
	}
}