#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main ()
//{   
//	int arr[] = { 1,2,3,4,5 };
//	
//	int i = 0;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("%d ", *(arr + i));
//	}
//
//	return 0;
//}






//   // 输入一个数 递归加一个数的每一位   12345+1234+123+12+1
//int sum(int n)                   
//{
//	if ((n / 10) != 0)
//	{
//		return (n + sum(n / 10));  
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = sum(n);
//	printf("%d", r);
//
//
//	return 0;
// }





////////////////////////输出水仙花数
//#include <math.h>
//int main()
//{
//
//	
//	int n = 0;
//	for(n=0;n<=99999;n++)
//	{ 
//		int count = 1;
//		int tmp = n;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp= tmp/ 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = n;
//		while (tmp)//1
//		{
//			sum = sum + (int) pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == n)      //3. 判断
//		{
//			printf("%d\n\n", n);
//		}
//	}
//	return 0;
//}






//
////////////////////////        逆序一个字符串 可以接收空格
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//	}
//}
//
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))                  //gets 可以接收空格
//	{
//		Reverse(str);
//		printf("%s\n", str);                                                    
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//	}
//	return 0;
//}
//






/////////////////////////////            打印一个菱形

int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);//7
	//打印上半部分
	for (i = 0; i < line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	  
	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}





