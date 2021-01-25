#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------------扫雷游戏-------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------------扫雷游戏------\n");
}
void SetMint(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		//1-9
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int GetMineCount(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';

}
void FindMint(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int win = 0;
	while (win<=row*col-Easy_Count)
	{
		printf("请输入要排查的坐标:");
		//1.坐标的合法性
		//2该坐标处是不是雷？不是雷，统计周围雷的个数
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{//1坐标合法性
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{//该坐标处不是雷，统计周围雷的个数
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//存放的是数字字符
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入");
		}
	}
	if (win == row*col - Easy_Count)
	{
		printf("恭喜你，排雷成功");
		DisplayBoard(mine, row, col);
		
	}
}