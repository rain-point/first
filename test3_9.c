#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
//写一个通讯录
void menu()
{
	printf("***********************");
	printf("********1.add*****2.del*********");
	printf("********3.search**4.modify**********");
	printf("********5.show****6.sort*********");
	printf("********0.exit**************");
}
enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
void test()
{
	int input = 0;
	struct Contact con;//创建了一个通讯录
	//初始化通讯录
	InitContact(&con);//
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact( &con );
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			Modify
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;

         
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}