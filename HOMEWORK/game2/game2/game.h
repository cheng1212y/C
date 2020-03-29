#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 9  //期望棋盘规模 目前是9x9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10  //放置炸弹的个数 目前是10个

#include <stdio.h>
#include<time.h>       
#include <stdlib.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);      //初始化棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);             // 打印棋盘
void SetMine(char mine[ROWS][COLS], int row, int col);                   //放置炸弹
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);  // 排除炸弹




