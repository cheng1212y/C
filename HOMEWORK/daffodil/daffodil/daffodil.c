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






//   // ����һ���� �ݹ��һ������ÿһλ   12345+1234+123+12+1
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





////////////////////////���ˮ�ɻ���
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
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp= tmp/ 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = n;
//		while (tmp)//1
//		{
//			sum = sum + (int) pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == n)      //3. �ж�
//		{
//			printf("%d\n\n", n);
//		}
//	}
//	return 0;
//}






//
////////////////////////        ����һ���ַ��� ���Խ��տո�
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
//	while (gets(str))                  //gets ���Խ��տո�
//	{
//		Reverse(str);
//		printf("%s\n", str);                                                    
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//	}
//	return 0;
//}
//






/////////////////////////////            ��ӡһ������

int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);//7
	//��ӡ�ϰ벿��
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	  
	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		//��ӡһ��
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





