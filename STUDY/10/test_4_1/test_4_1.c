#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int NumberOf1(unsigned int n)   //����һ���� ������λ����1�ĸ���
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)   //ͨ������ģ2 ��2 ÿ����һ�ξͻᶪʧһ��1
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main  ()
//{
//	 int a = 0;
//scanf("%d", &a);
//int r = NumberOf1(a);
//printf("%d", r);
//	return 0;
//}
//


//
// �ڶ��ּ��㷽ʽ
//int main  ()
//
//{
//int a = 0;
//int i = 0;
//int count = 0;
//scanf("%d", &a);
//for(i=0;i<32;i++)
//{
//	if ((a & (1 << i)) == (1 << i))    //ͨ��1����32λ�е�ÿһλһһ�Ա�
//	{
//		count++;
//	}
//}
//printf("%d", count);
//	return 0;
//}


//�����ּ��㷽ʽ 
//int main  ()
//
//{
//int a = 0;
//int i = 0;
//int count = 0;
//scanf("%d", &a);
//while (a)
//
//{
//	a = a & (a - 1);  //ģ���ļ�1 ��ȥ��һ��1
//	count++;
//}
//printf("%d", count);
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	int * pa = &a;
//	*pa = 0;
//
//	return 0;
//}

//ָ���������������
//1. ָ�����;�����ָ����н����ò����ķ��ʶ��ռ�
//char* ָ�룬�����ò���������1���ֽ� int* ָ������÷���4���ֽ� 
//2. ָ�����;�����ָ��+1���������ٸ��ֽ�(��һ�����߶�����)
//char* ָ��+1�������1���ֽ�
//int* ָ��+1�������4���ֽ�
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char*pc = &a;
//	
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//pa ��int* ��ָ�룬+1��������1�����Σ�4���ֽڣ�����˼��ʵ���ϼ���4
//
//	printf("%p\n", pc);//pc ��char* ��ָ�룬+1��������1���ַ���1���ֽڣ�����˼��ʵ���ϼ���1
//	printf("%p\n", pc+1);
//
//	return 0;
//}



////////////////////////////////////// //Ұָ�����������

//δ��ʼ��
//int main()
//{
//	//int a = 0;//�ֲ�����-���ֵ
//	//printf("%d\n", a);
//	//a++;
//
//	int *p;//Ұָ��
//	*p = 20;
//
//	return 0;
//}
//


//Խ�����
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = 0;
//		p++;
//	}
//	return 0;
//}


//�ռ��ѱ��ͷ� ���ڷ���
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 20;
//
//	return 0;
//}
//


///////////////////////////����Ұָ��
//int main()
//{
//	int a = 10;
//	int *p = &a;       //��ʼ��
//	int* p2 = NULL;      //��֪����p2ָ������
//	//ʹ��p������a
//	//...
//	p = NULL;                 //ʹ�����ÿ�
//	if (p != NULL)                //ʹ��ǰ�ж� ��Ϊ����ʹ��             
//		*p = 0;
//	return 0;
//}


///////////mystrlenʵ��

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	//[a][b][c][\0]
//	printf("%d\n", len);
//	return 0;
//}

///////////////////////////////////////�������ͨ��ָ��������
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//	}



int main()
{
	int arr[10] = { 0 };
	int i = 0;


	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
		printf("%d ", *(arr + i));
	}
}





