#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 9  //�������̹�ģ Ŀǰ��9x9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10  //����ը���ĸ��� Ŀǰ��10��

#include <stdio.h>
#include<time.h>       
#include <stdlib.h>

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);      //��ʼ������
void DisplayBoard(char board[ROWS][COLS], int row, int col);             // ��ӡ����
void SetMine(char mine[ROWS][COLS], int row, int col);                   //����ը��
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);  // �ų�ը��




