#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main ()
//{
//	int a = 0;									//����1�ĸ���
//	int i = 0;
//	int count = 0;
//	scanf("%d", &a);
//	
//		for (i = 0; i < 32; i++)
//		{
//			if ((a & (1 << i)) == (1 << i)) //����00000000000000000000000000000001
//				count++;					//�е�1�ֱ������ & ����Ϊȫ1Ϊ1�� 
//			                               //  ����1<<i�Ƚ� ����ͬ ��˵����1
//		}
//		printf("count=%d", count);
//	
//	return 0;
//}



//������������ �����Ʋ�ͬλ�ĸ���
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




//����һ�����Ķ����Ƶ�  ����λ ��ż��λ ��ӡ
void Print(int num)
{
	printf("ż����");
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("������");
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