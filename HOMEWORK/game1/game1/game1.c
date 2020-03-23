#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>



void menu()
{
	printf("-----------请美仙女输入数字后并且按下回车键------\n");
	printf("--------------------1开始游戏--------------------\n");
	printf("--------------------0退出游戏--------------------\n");
	
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	//printf("%d",ret);
	while (1)
	{
		int i= 0;
		printf("仙女输入猜测数字是：  ");
		scanf("%d", &guess);
		if (guess >ret)
		{
			printf("哈哈哈宝贝猜大了\n");
		}
		else if (guess<ret)
		{
			printf("太小了仙女\n");
		}
		else {
			printf("美仙女你真聪明猜对了啊哈哈哈哈\n");
			while (i<9) {
				printf("爱你宝贝\n");
				Sleep(1000);
				i++;

			}
			
			break;
		}
	}
 }

int main() 
{
	printf("-----------------仙女来玩个游戏吧----------------\n");
	printf("----------------这是一个猜大小游戏---------------\n");
	int input = 0;
	srand((unsigned int) time(NULL));
	do {
		menu();
		printf("仙女的选择是:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("仙女输入有误，请看提示\n");
			break;
		}
	} while (input);
	return 0;
}




	

