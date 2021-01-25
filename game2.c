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
	printf("---------------ɨ����Ϸ-------\n");
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
	printf("----------------ɨ����Ϸ------\n");
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
		printf("������Ҫ�Ų������:");
		//1.����ĺϷ���
		//2�����괦�ǲ����ף������ף�ͳ����Χ�׵ĸ���
		int x = 0;
		int y = 0;
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row &&y >= 1 && y <= col)
		{//1����Ϸ���
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{//�����괦�����ף�ͳ����Χ�׵ĸ���
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//��ŵ��������ַ�
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�������������");
		}
	}
	if (win == row*col - Easy_Count)
	{
		printf("��ϲ�㣬���׳ɹ�");
		DisplayBoard(mine, row, col);
		
	}
}