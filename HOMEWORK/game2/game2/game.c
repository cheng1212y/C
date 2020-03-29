#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)  //��ʼ������ 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		
		for(j=0;j<cols;j++)
		{
			board[i][j] = set;	
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col) //������11�����̣�����ֻ��ӡ99����
{
	
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)						//��ӡ���̵ĺ����� ����鿴
	{
		printf("%d ", i);           
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);							//��ӡ���̵������� ����鿴
	
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);          //��ӡ����
		}
		printf("\n");
	}
}


void SetMine(char mine[ROWS][COLS], int row, int col) //����ը��
{
	int count = EASY_COUNT;   
	while (count)
	{
		int x = rand() % row + 1;    // ը�������÷�Χ�������ֵ1 -9����
		int y = rand() % col + 1;
	
		if (mine[x][y] == '0')//����ը����
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


int GetMineCount(char mine[ROWS][COLS], int  x, int y)//ͳ����Χը������
{
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +  
		mine[x + 1][y] +
		mine[x + 1][y + 1] +  
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');  //һ��ʼը�����ַ�����  �ַ����� ��ȥ�ַ��� ��������
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) //�ų�ը��
{
	int x = 0;
	int  y = 0;
	int win = 0;
	while (win < row*col - EASY_COUNT) //����ը���ĸ���

	{
		printf("������Ҫ�Ų�����꣬��ʽ:�� �ո� �� �س�");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')            //��'1'��λ�ô���ը��
			{
				printf("����ž������ը���ˣ���Ϸ����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);//ͳ���׵ĸ�������һȦ

				show[x][y] = count + '0';   //���ּ��ַ��� = �ַ����� ���׵ĸ�������show������
				system("cls");
				DisplayBoard(show, row, col);  //��һ���� ��ӡһ�ν��

				win++;    //ͳ�����״���
			}
		}
		else
		{
			printf("���������������������룡\n");
		}
	}
	if (win == row * col - EASY_COUNT)  //��Ϸ����������
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}