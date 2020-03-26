#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//    int main  ()
//	{
//		printf("xixi");
//		main();                     //函数的递归调用，但是栈的空间是有限的，反复递归后，导致栈溢出就停下
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
//		print(n / 10);                  //递归的方式来打印出 1 2 3
//	}
//	printf("%d  ", n % 10);          // 打印3 但方便 打印
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
////允许创建变量来计算字符串的长度
//
//int mystrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;              //str是一个指针，它指向的是数组的首地址，++的含义是跳向首地址的下一个元素
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
////不允许创建临时变量 来计算字符串的长度
//int  mystrlen(char* str)
//{
//	if (*str != '\0')
//
//		return 1 + mystrlen(str + 1);     //寻找到\0的时候会返回0 后面每返回一次就会自增1 最后返回的就是字符的个数
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
////递归求n！
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1); //计算的顺序就是   n=3      n=2      n=1
//}											// 3x返回值  2x返回值  1x返回值
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



//递归求第n个斐波那契数     1 1 2 3 5 8 13 21......     n<=2 , 1
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




//通过迭代的方式求 n！
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





////迭代的方式求菲波那切数
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
//	int arr[10] = { 0 };  //数组的初始化
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//





//数组在内存中是连续存放的
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



//地址打印数组
//int main()
//
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8 }; //地址加一，也可以打印。因为p它是一个指针，p++ 的时候，p指向的int是4字节，  
//										//所有每次加四个字节，也向后跳一个元素了14023024    14023028  
//                                        //如果指向的是 char*  每次增加1个字节，也跳一个元素
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