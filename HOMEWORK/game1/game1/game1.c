#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>



void menu()
{
	printf("-----------������Ů�������ֺ��Ұ��»س���------\n");
	printf("--------------------1��ʼ��Ϸ--------------------\n");
	printf("--------------------0�˳���Ϸ--------------------\n");
	
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	//printf("%d",ret);
	while (1)
	{
		int i= 0;
		printf("��Ů����²������ǣ�  ");
		scanf("%d", &guess);
		if (guess >ret)
		{
			printf("�����������´���\n");
		}
		else if (guess<ret)
		{
			printf("̫С����Ů\n");
		}
		else {
			printf("����Ů��������¶��˰���������\n");
			while (i<9) {
				printf("���㱦��\n");
				Sleep(1000);
				i++;

			}
			
			break;
		}
	}
 }

int main() 
{
	printf("-----------------��Ů�������Ϸ��----------------\n");
	printf("----------------����һ���´�С��Ϸ---------------\n");
	int input = 0;
	srand((unsigned int) time(NULL));
	do {
		menu();
		printf("��Ů��ѡ����:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��Ů���������뿴��ʾ\n");
			break;
		}
	} while (input);
	return 0;
}




	

