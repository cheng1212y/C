#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
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
	total = money * 2 - 1;              //实际喝的瓶数是 等差数列 money*2-1
}
printf("total = %d\n", total);


return 0;
}