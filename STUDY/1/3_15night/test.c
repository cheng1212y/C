#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main  ( )
//{
//	int a = 10000000;
//	int b = 100;
//	int max = 0;
//	max = (a > b) ? (a) : (b);            //��Ŀ�����
//	printf("%d", max);
//	return 0;
//}
 



//typedef  unsigned int a;
//int main()
//{
//	a b = 666;                      //typedef�ǿ������͵������� 
//	printf("%d", b);
//	return 0;
//}




//void add ( )
//{
//	static int a = 5;                           //static ���ξֲ�����ʱ�򣬻�ʹ������������������������
//	a++;                                        //���沢�������١�
//	printf("%d", a);
//}
//int main()
//{
//	int i= 0;
//	while (i < 10)
//	{
//		add ( );
//			i++;
//	}
//	return 0;
//}


//
//extern int a;                          //���static������һ��ȫ�ֱ�����ʹ���ķ�Χ��С��ô����������ֻ���������ε��ļ��С�
//int main()
//{                                       //
//	printf("%d", a);      
//	return 0;
//   }



//extern add(int x, int y);                    //static���κ�����ʱ��Ҳ���С���������������ļ�
//int main()
//{  
//	int a = 1;
//	int b = 2;
//	printf("a+b=%d", add(a, b));  
//	return 0;
//}
//




//int add(int x, int y)
//{
//	return ((x > y) ? (x) : (y));
//}    //��Ŀ������ ��������
//
//#define  MAX(X,Y) ((X > Y) ? (X) : (Y))        //ʹ�ú�������ֵ�Ƕ��� �������Ҫ��д
//int main()
//{  
//	int a = 6;
//	int b = 8;
//	int c = 0;
//	//��������
//	 c = add(a, b);
//	printf("������%d\n", c);
//	//�����
//	c = min(a, b);
//	printf("������%d\n", c);
//	return 0;
//}


//
//int main()
//{
//	int a = 100;
//	int* c = &a;            //c��ָ�����  ������   int*  
//	printf("%p\n", c);       //ȡ��ַ��ӡa�ĵ�ַ
//	printf("%p", &a);         //ȡ��ַ ����ӡ
//}



//
//int main()
//{
//	int a = 666;
//	int* c = &a;         
//	*c = 10;               //*P�ǽ����÷���ͨ�����ҵ�a�ĵ�ַ����ָʾ�Ķ���
//	printf("%d\n",a);         
//}


#include <stdio.h>
int main()
{ 
	printf("%d\n", sizeof(char *)); 
	printf("%d\n", sizeof(short *));    //32λƽ̨��4���ֽڣ�64λƽ̨��8����
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(double *)); 
	return 0; 
} 