#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//int main()
//
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//    //printf("%d", sz);      
//	int a = 17;
//	int i = 0;
//	for (i = 1; i < 10; i++)  
//	{
//		if (a == arr[i])                       // ͨ������ı���������
//		{
//			printf("�ҵ���");
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
// }





int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);     //���ֲ��ҷ�  Ѱ�������Ƿ�������������
    //printf("%d", sz);
	int a = 7;
	int i = 0;
	int left = 0;
	int right = sz-1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right)/2;           //��Ҫ��ͨ�� left ��right ����ȡֵ
		if (a > arr[mid])
		{
			left=mid+1;
		}
		  else if(a < arr[mid])
		 { 
			right = mid - 1;
	      }
		     else
		     {
			printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
			break;
		     }
	}
	if (left > right)
	{
		printf("�Ҳ�������������");
	}
	return 0;
 }







