#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{10} };   //��ά�����ʹ��
//	int i = 0; 
//	for (i = 0; i < 3; i++)
//	{    
//		int j = 0; 
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{10} };  
//	int i = 0; 
//	for (i = 0; i < 3; i++)
//	{    
//		int j = 0; 
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p ", &arr[i][j]);  //��ά�������ڴ����������洢�ģ���ַ��������
//		}
//		printf("\n");
//	}
//	return 0;
//}




 //ð�������㷨
// void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;                
//			}
//		}
//		if (flag == 1)    //�������1 ˵����һ������û�н�����ȫ��˳��ģ�ֱ������ѭ�� ����������˳��
//		{
//			break;
//		}
//
//	}
//}
//void PrintArr(int arr[], int sz)
//{
//	int i = 0;
//           for (i = 0; i < sz; i++)
//			{
//			   printf("%d", arr[i]);
//      		}
//		   printf("\n");
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	 PrintArr(arr, sz); //����ǰ
//	 BubbleSort(arr,sz);
//	 PrintArr( arr, sz);//�����
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));  //  10  9  
//	return 0;										// sizeof����\0 strlen�����㣬  �ַ������Դ�\0 
//}



int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	//��������ʲô��
	//��������������Ԫ�صĵ�ַ
	//ע�⣺����������
	//1. sizeof(arr) - sizeof(������) - ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
	//2. &arr - &������ - ��������ʾ�������飬 &������ȡ��������������ĵ�ַ
	printf("%p\n", arr);             //������Ԫ�ص�ַ
	printf("%p\n", arr + 1);	     //������Ԫ�ص�ַ +1

	printf("%p\n", &arr[0]);		//������Ԫ�ص�ַ
	printf("%p\n", &arr[0] + 1);    //������Ԫ�ص�ַ +1 

	printf("%p\n", &arr);          //ȡ��������������ĵ�ַ����������Ԫ�ص�ַ����ʾ��������ĵ�ַ
	printf("%p\n", &arr + 1);      //���������ַ��Ļ����� +1
	//printf("%d\n", *arr);      //������Ԫ��
	return 0;
}