#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu()
{

	printf("       *******  1开始游戏  **********\n");
	printf("       *******  0退出游戏  **********\n\n");

}
void game()
{  //创建存储雷的两个数组
	char mine[ROWS][COLS] = { 0 };  //布置雷的棋盘
	char show[ROWS][COLS] = { 0 }; // 排查后显示雷的棋盘
	
								   
  //初始化两个棋盘的函数
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	
	//打印棋盘看看
	//DisplayBoard(mine, ROW, COL );
	//DisplayBoard(show, ROW, COL);
	
	//放置炸弹
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL); //打印看看炸弹
	DisplayBoard(show ,ROW, COL); 
	//排查炸弹

	FindMine(mine,show, ROW, COL);
}

void test ()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //得到一个随机数 后面放置炸弹需要
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

		case 0:
			printf("退出游戏");
			printf("\n");
			break;
		default:
			system("cls");
			break;
		}
	} while (input);
}

int main()
{
	test();
}