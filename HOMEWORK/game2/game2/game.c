#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)  //初始化棋牌 
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

void DisplayBoard(char board[ROWS][COLS], int row, int col) //传的是11的棋盘，但是只打印99棋盘
{
	
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)						//打印棋盘的横坐标 方便查看
	{
		printf("%d ", i);           
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);							//打印棋盘的纵坐标 方便查看
	
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);          //打印棋盘
		}
		printf("\n");
	}
}


void SetMine(char mine[ROWS][COLS], int row, int col) //设置炸弹
{
	int count = EASY_COUNT;   
	while (count)
	{
		int x = rand() % row + 1;    // 炸弹的设置范围是是随机值1 -9坐标
		int y = rand() % col + 1;
	
		if (mine[x][y] == '0')//放置炸弹到
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


int GetMineCount(char mine[ROWS][COLS], int  x, int y)//统计周围炸弹个数
{
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +  
		mine[x + 1][y] +
		mine[x + 1][y + 1] +  
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');  //一开始炸弹是字符数字  字符数字 减去字符零 才是数字
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) //排除炸弹
{
	int x = 0;
	int  y = 0;
	int win = 0;
	while (win < row*col - EASY_COUNT) //不是炸弹的个数

	{
		printf("请输入要排查的坐标，格式:行 空格 列 回车");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')            //放'1'的位置代表炸弹
			{
				printf("噼里啪啦，被炸倒了，游戏结束\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);//统计雷的个数环绕一圈

				show[x][y] = count + '0';   //数字加字符零 = 字符数字 将雷的个数存在show棋盘中
				system("cls");
				DisplayBoard(show, row, col);  //排一次雷 打印一次结果

				win++;    //统计排雷次数
			}
		}
		else
		{
			printf("输入坐标有误，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)  //游戏结束的条件
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}