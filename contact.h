#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30
#define MAX 1000
#include<stdio.h>
#include<string.h>
//描述一个人信息的结构体
struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char adrr[ADDR_MAX];
};
//通讯录的结构体
struct Contact
{
	struct PeoInfo data[MAX];//存放1000人的信息
	int sz;//表示通讯录中当前存放的人的信息个数
};
void InitContact(struct Contact *pc);
void AddContact(struct Contact* pc);
//打印通讯录中的信息
void ShowContact(const struct Contact*pc);
//删除一个人的信息
void DelContact(struct Contact* pc);
//查找指定联系人
void SearchContact(struct Contact *pc);
//修改指定联系人
void ModifyContact(struct Contact* pc);
