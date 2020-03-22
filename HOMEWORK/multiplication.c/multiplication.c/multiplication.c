#define _CRT_SECURE_NO_WARNINGS 1



//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		//每次打印一行
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d\t", i, j, i*j);  //-2%d是控制对齐格式的
		}
		printf("\n");
	}
	return 0;
}





