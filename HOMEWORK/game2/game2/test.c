#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu()
{

	printf("       *******  1��ʼ��Ϸ  **********\n");
	printf("       *******  0�˳���Ϸ  **********\n\n");

}
void game()
{  //�����洢�׵���������
	char mine[ROWS][COLS] = { 0 };  //�����׵�����
	char show[ROWS][COLS] = { 0 }; // �Ų����ʾ�׵�����
	
								   
  //��ʼ���������̵ĺ���
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	
	//��ӡ���̿���
	//DisplayBoard(mine, ROW, COL );
	//DisplayBoard(show, ROW, COL);
	
	//����ը��
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL); //��ӡ����ը��
	DisplayBoard(show ,ROW, COL); 
	//�Ų�ը��

	FindMine(mine,show, ROW, COL);
}

void test ()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //�õ�һ������� �������ը����Ҫ
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
			break;

		case 0:
			printf("�˳���Ϸ");
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