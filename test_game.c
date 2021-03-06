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
	//数据的存储是二维数组
	char board[ROW][COL];//初始化为空格
	//初始化棋盘，初始化为空格 
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
	    ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board,ROW,COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else if (ret == 'Q')
		printf("平局\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			{
				   printf("选择错误");
				   break;
			}
		}

	}while (input);
	return 0;
}