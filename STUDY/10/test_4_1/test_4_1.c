#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int NumberOf1(unsigned int n)   //计算一个数 二进制位子中1的个数
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)   //通过不断模2 除2 每进行一次就会丢失一个1
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
// 第二种计算方式
//int main  ()
//
//{
//int a = 0;
//int i = 0;
//int count = 0;
//scanf("%d", &a);
//for(i=0;i<32;i++)
//{
//	if ((a & (1 << i)) == (1 << i))    //通过1来和32位中的每一位一一对比
//	{
//		count++;
//	}
//}
//printf("%d", count);
//	return 0;
//}


//第三种计算方式 
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
//	a = a & (a - 1);  //模它的减1 将去掉一个1
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

//指针类型是有意义的
//1. 指针类型决定了指针进行解引用操作的访问多大空间
//char* 指针，解引用操作符访问1个字节 int* 指针解引用访问4个字节 
//2. 指针类型决定了指针+1，跳过多少个字节(走一步，走多大距离)
//char* 指针+1，向后跳1个字节
//int* 指针+1，向后跳4个字节
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char*pc = &a;
//	
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//pa 是int* 的指针，+1就是跳过1个整形（4个字节）的意思，实际上加了4
//
//	printf("%p\n", pc);//pc 是char* 的指针，+1就是跳过1个字符（1个字节）的意思，实际上加了1
//	printf("%p\n", pc+1);
//
//	return 0;
//}



////////////////////////////////////// //野指针的三种类型

//未初始化
//int main()
//{
//	//int a = 0;//局部变量-随机值
//	//printf("%d\n", a);
//	//a++;
//
//	int *p;//野指针
//	*p = 20;
//
//	return 0;
//}
//


//越界访问
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


//空间已被释放 还在访问
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


///////////////////////////避免野指针
//int main()
//{
//	int a = 10;
//	int *p = &a;       //初始化
//	int* p2 = NULL;      //不知道让p2指向哪里
//	//使用p访问了a
//	//...
//	p = NULL;                 //使用完置空
//	if (p != NULL)                //使用前判断 不为空再使用             
//		*p = 0;
//	return 0;
//}


///////////mystrlen实现

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

///////////////////////////////////////数组可以通过指针来访问
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





