#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
int main ()
{
int money = 0;
int total = 0;
int empty = 0;

scanf("%d", &money);    

if (money <= 0)
{
	total = 0;
}
else
{
	total = money * 2 - 1;              //ʵ�ʺȵ�ƿ���� �Ȳ����� money*2-1
}
printf("total = %d\n", total);


return 0;
}