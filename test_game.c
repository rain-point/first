#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*********************\n");
	printf("**********1.play*****\n");
	printf("**********0.exit*****\n");
}
void game()
{
	int ret = 0;
	//���ݵĴ洢�Ƕ�ά����
	char board[ROW][COL];//��ʼ��Ϊ�ո�
	//��ʼ�����̣���ʼ��Ϊ�ո� 
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
	    ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//��������
		ComputerMove(board,ROW,COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			{
				   printf("ѡ�����");
				   break;
			}
		}

	}while (input);
	return 0;
}