#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//    int main  ()
//	{
//		printf("xixi");
//		main();                     //�����ĵݹ���ã�����ջ�Ŀռ������޵ģ������ݹ�󣬵���ջ�����ͣ��
//
//	return 0;
//
//
//	}
//






//
//void print(unsigned int n)     
//{
//	 
//	if (n > 9)
//	{
//		print(n / 10);                  //�ݹ�ķ�ʽ����ӡ�� 1 2 3
//	}
//	printf("%d  ", n % 10);          // ��ӡ3 ������ ��ӡ
//
//}
//
////	//Print(123)
////	//Print(12) + 3
////	//Print(1) + 2 + 3
////	//1 2 3
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);  //123
//	print(num);
//
//	return 0;
// }
//





//
////�����������������ַ����ĳ���
//
//int mystrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;              //str��һ��ָ�룬��ָ�����������׵�ַ��++�ĺ����������׵�ַ����һ��Ԫ��
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "Hello world";
//	int len = mystrlen(arr);
//	printf("%d", len);
//	return 0;
//}




//
////����������ʱ���� �������ַ����ĳ���
//int  mystrlen(char* str)
//{
//	if (*str != '\0')
//
//		return 1 + mystrlen(str + 1);     //Ѱ�ҵ�\0��ʱ��᷵��0 ����ÿ����һ�ξͻ�����1 ��󷵻صľ����ַ��ĸ���
//	else
//		return 0;
//}
////	1 + 1 + mystrlen("t");
////	1 + 1 + 1 + mystrlen("\0");
////	1 + 1 + 1 + 0;
//    int main()
//	{
//	char arr[] = "Hello world";
//	int len = mystrlen(arr);
//	printf("%d", len);
//	return 0;
//}
//







//
////�ݹ���n��
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1); //�����˳�����   n=3      n=2      n=1
//}											// 3x����ֵ  2x����ֵ  1x����ֵ
//int  main()									//	3x2        2x1      1x1
//{
//	int n = 0;
//	int i = 0;
//	int c = 0;
//	scanf("%d", &n);
//	
//	 c = fac(n);
//	 printf("%d", c);
//}



//�ݹ����n��쳲�������     1 1 2 3 5 8 13 21......     n<=2 , 1
// 														n>2  ,fib(n-1)+fib(n-2)

//
//int fib(int n)
//{   
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int r = 0;
//	scanf("%d", &n);
//	r = fib(n);
//	printf("%d", r);
//	return 0;
//}




//ͨ�������ķ�ʽ�� n��
//int fac(int a)
//{
//	int result = 1;
//	while (a > 1)
//	{
//		result  *= a;
//		a -= 1;
//	}
//	return result;
//}
//int main()
//{
//	int n = 0;
//	int r = 0;
//	scanf("%d",&n);
//	r = fac(n);
//	printf("%d", r);
//	return 0;
//}
//





////�����ķ�ʽ��Ʋ�������
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int r = 0;
//	scanf("%d", &n);
//	r = fib(n);
//	printf("%d", r);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };  //����ĳ�ʼ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//





//�������ڴ�����������ŵ�
//int main()
//
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8 }; 
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);         
//	}
//		return 0;
//}


//
//int main()
//
//{
//	char arr[ ] = "hello";
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//		return 0;
//}



//��ַ��ӡ����
//int main()
//
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8 }; //��ַ��һ��Ҳ���Դ�ӡ����Ϊp����һ��ָ�룬p++ ��ʱ��pָ���int��4�ֽڣ�  
//										//����ÿ�μ��ĸ��ֽڣ�Ҳ�����һ��Ԫ����14023024    14023028  
//                                        //���ָ����� char*  ÿ������1���ֽڣ�Ҳ��һ��Ԫ��
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d",*p);
//		p++;
//	}
//		return 0;
//}
//


int main()
{
	int arr[][3] = { 1,2,3,4,5 };
	int arr1[][4] = { {1,2},{3,4} };  

	return 0;
}