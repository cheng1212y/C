#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
//int main ()
//{
//	char arr1[20] = "@@@@@@@@";      
//	char arr2[] = "***";
//	strcpy(arr1, arr2);           //�Ѱ�arr2�Ŀ�����arr1
//	printf("%s", arr1);
//return 0;
//}
//




//int main()
//{
//	char arr1[] = "Hello world";
//	memset(arr1, '@', 5);        //arr1��ǰ����ַ��滻Ϊ@
//	printf("%s", arr1);
//	return 0;
//}






//           ��ʽ����
// void swap(int x, int y)   //��ֵ����ʧ�ܣ���Ϊʵ�δ����β�ʱ��
//{							//�Ƕ�ʵ�ε�һ����ʱ����
//	int tmp = 0;			//���βε��޸Ĳ���Ӱ��ʵ��
//	tmp = x;
//	x = y;                  //����swapʱ�� x��y��ʼ�����µ��ڴ�ռ�
//	y = tmp;		
//}
//							 x y���µĵ�ַ�ռ� abû���κι�ϵ					
//int main()
//{
//	int a = 6;
//	int b = 8;
//	swap(a, b);//ʵ�ʲ���
//	printf("%d  %d", a, b);
//	return 0;
// }





//
//         //����������ab�ĵ�ַ �����������޸Ļ�ֱ�Ӳ�����������ݣ�
//void swap(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main()
//{
//	int a = 999;
//	int b = 8;
//	printf("a=%d b=%d\n",a,b);
//	swap(&a, &b);  //ͨ����ַ������
//	printf("a=%d b=%d", a, b);
//	return 0;
//}







//#include <math.h>
//int is_prime(int n)                       //�ж��Ƿ�Ϊ�����ĺ���
//{
//	  int i = 0;
//	  for (i = 2; i <=sqrt(n); i++)
//	  {
//		  if (n % i == 0) 
//		  {
//			  return 0;
//		  }
//	  }
//	  return 1; 
// }
//
//int main()
//{
//	int count = 0;
//	int i = 100;
//	while (i <= 200)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n",i);
//			count++;
//		}	
//		i++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}





//
//
//
//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);  //����2020
//	if (is_leap_year(year) == 1)     //yearȡ��ַ���ֵ��������2020��ֱ�Ӵ����β�n
//	{
//		printf("������\n");
//	}
//	else
//		printf("��ƽ��\n");
//	return 0;
//}
//	





//
//
//int find(int arr[], int k, int sz)  //���ֲ��Һ���
//{
//	int left = 0;
//	int right = sz-1;
//	
//	while (left <= right)       //left  <= right �ҳ������ҵ�ֵ
//	{
//	  int mid = (left + right)/2;
//		if (arr[mid] < k )
//		{
//			left=mid+1;
//		}
//		else if (arr[mid] > k )
//		{
//			right=mid-1;
//		}
//
//		else
//		{
//			return mid ;
//		}
//	}
//	return -1;
//}
//int main ()
//{
//	int  arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	scanf("%d", &k);
//
//	int ret = find(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ�����\n");
//
//	}
//	else
//	{
//		printf("�ҵ���,�±���%d", ret);
//	}
//
//	return 0;
//}
//




//void add(int* p)       //ÿ����һ��add num��ֵ��һ
//{
//	(*p)++;
//
//}
//
//int main()
//{
//
//	int num = 0;
//	add(&num);
//	printf("%d", num);
//	add(&num);
//	printf("%d", num);
//}
//
//





//
//void xi()
//{
//	printf("xixi");
//}
//
//void three()
//{
//	int i = 0;
//		for (i = 0; i < 3; i++);    //������Ƕ�׵���
//		{ 
//			xi( );
//		}
//
//}
//int main()
//{
//
//	three();
//	return 0;
//}




//int main()
//{
//	int a = strlen("aaa");
//	printf("%d", a);
//	printf("%d", strlen("aaa"));  //��������ʽ����
//	return 0;
//}




//
//int main()
//{
//		printf("%d", printf("%d", printf("%d",43))); //printf�����ķ���ֵ�� ��ӡ�ַ��ĸ���
//	return 0;
//}
//






#include  "clc.h"    //�Լ�д�ĺ�����" " ���������⺯����< >
int main()
{
	int a = 20;
	int b = 50;
	int x = sum(a, b);
	int y = sub(a, b);       //�˴�ֻ�ǵ���
	printf("sum=%d\n\n\n", x);
	printf("sub=%d\n", y);


 }