#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main  ( )
//{
//	int a = 10000000;
//	int b = 100;
//	int max = 0;
//	max = (a > b) ? (a) : (b);            //三目运算符
//	printf("%d", max);
//	return 0;
//}
 



//typedef  unsigned int a;
//int main()
//{
//	a b = 666;                      //typedef是可以类型的重命名 
//	printf("%d", b);
//	return 0;
//}




//void add ( )
//{
//	static int a = 5;                           //static 修饰局部变量时候，会使得它的生命周期增长，用完
//	a++;                                        //保存并不会销毁。
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
//extern int a;                          //如果static修饰了一个全局变量，使它的范围变小那么他的作用域只能在其修饰的文件中。
//int main()
//{                                       //
//	printf("%d", a);      
//	return 0;
//   }



//extern add(int x, int y);                    //static修饰函数的时候，也会减小它的作用域到自身文件
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
//}    //三目操作符 函数计算
//
//#define  MAX(X,Y) ((X > Y) ? (X) : (Y))        //使用宏计算最大值是多少 定义宏需要大写
//int main()
//{  
//	int a = 6;
//	int b = 8;
//	int c = 0;
//	//函数计算
//	 c = add(a, b);
//	printf("最大的是%d\n", c);
//	//宏计算
//	c = min(a, b);
//	printf("最大的是%d\n", c);
//	return 0;
//}


//
//int main()
//{
//	int a = 100;
//	int* c = &a;            //c是指针变量  类型是   int*  
//	printf("%p\n", c);       //取地址打印a的地址
//	printf("%p", &a);         //取地址 并打印
//}



//
//int main()
//{
//	int a = 666;
//	int* c = &a;         
//	*c = 10;               //*P是解引用符，通过它找到a的地址的所指示的对象。
//	printf("%d\n",a);         
//}


#include <stdio.h>
int main()
{ 
	printf("%d\n", sizeof(char *)); 
	printf("%d\n", sizeof(short *));    //32位平台是4个字节，64位平台是8个字
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(double *)); 
	return 0; 
} 