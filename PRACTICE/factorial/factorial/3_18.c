#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int t = 1;
	int i = 2;
	int a = 0;
	printf("请输输入期望计算的阶乘\n");
	scanf("%d", &a);
	while (i <= a)
	{
		t = t * i;  
			i = i + 1;
	}
	printf("%d的阶乘结果是%d",a,t);  //计算n的阶乘后输出值
	return 0;

}