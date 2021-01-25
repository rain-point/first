#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_Count 10
void InitBoard(char mine[ROWS][COLS], int rows, int cols,char set);
void DisplayBoard(char mine[ROWS][COLS], int row, int col);
void SetMint(char mine[ROWS][COLS], int row, int col, int count);
void FindMint(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int GetMineCount(char mine[ROWS][COLS], int x, int y);