#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main ()
//{
//	int a = 0;									//计算1的个数
//	int i = 0;
//	int count = 0;
//	scanf("%d", &a);
//	
//		for (i = 0; i < 32; i++)
//		{
//			if ((a & (1 << i)) == (1 << i)) //左移00000000000000000000000000000001
//				count++;					//中的1分别和数字 & ，因为全1为1， 
//			                               //  再与1<<i比较 若相同 则说明有1
//		}
//		printf("count=%d", count);
//	
//	return 0;
//}



//计算两个数中 二进制不同位的个数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &a,&b);
//	for (i = 0; i < 32; i++)
//	{
//	if ((a & (1 << i)) != (b & (1 << i)))			 
//	count++;																
//	}
//	printf("count=%d", count);
//}



//
//int main()
//{
//	int a = 10;
//	int b = 66666666;
//	a = a ^ b;
//	b = a ^ b;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}
//




//计算一个数的二进制的  奇数位 与偶数位 打印
void Print(int num)
{
	printf("偶序列");
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("奇序列");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}

int main ()
{
	int a = 0;
	scanf("%d", &a);
	Print(a);                    
                     
	
	return 0;
}