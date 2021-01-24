#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
#include<stdio.h>
#include<stdlib.h>
void InitBoard(char board[ROW][COL], int row, int col)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)//初始化
{
	int i = 0;
	///*int j = 0;*/
	//for (i = 0; i < row; i++)
	//{
	//	//打印数据
	//	printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	//	//打印分割的行
	//	printf("---|---}---\n");
	//}
	for (i = 0; i < row; i++)
	{
		//打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割的行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("玩家走:");
	printf("请输入一个坐标:");
	scanf("%d %d", &x, &y);
	while (1)
	{
		if (x >= 1 && y >= 1 && x <= row&&y <= col)
	{
			if (board[x-1][y-1] != ' ')
			{
				printf("坐标被占用，请重新输入\n");
			}
			else
			{
				board[x-1][y-1] = '*';
				break;
			}
	}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
		}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:\n");
	int x = rand() % row;
	int y = rand() % col;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//三行的判断
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
		for (i = 0; i < row; i++)//三列的判断
		{
			if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[0][i] != ' ')
			{
				return board[0][i];
			}
	}
		//对角线的判断
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			{
				return board[1][1];
			}
		
			if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			{
				return board[1][1];
			}
	//平局
			if (IsFull(board, row, col) == 1)
			{
				return 'Q';
			}
			return 'C';
}