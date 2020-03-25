#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
//int main ()
//{
//	char arr1[20] = "@@@@@@@@";      
//	char arr2[] = "***";
//	strcpy(arr1, arr2);           //把啊arr2的拷贝到arr1
//	printf("%s", arr1);
//return 0;
//}
//




//int main()
//{
//	char arr1[] = "Hello world";
//	memset(arr1, '@', 5);        //arr1的前五个字符替换为@
//	printf("%s", arr1);
//	return 0;
//}






//           形式参数
// void swap(int x, int y)   //传值交换失败，因为实参传给形参时候，
//{							//是对实参的一份临时拷贝
//	int tmp = 0;			//对形参的修改不会影响实参
//	tmp = x;
//	x = y;                  //调用swap时候 x，y开始开辟新的内存空间
//	y = tmp;		
//}
//							 x y是新的地址空间 ab没有任何关系					
//int main()
//{
//	int a = 6;
//	int b = 8;
//	swap(a, b);//实际参数
//	printf("%d  %d", a, b);
//	return 0;
// }





//
//         //传进来的是ab的地址 这样函数的修改会直接操作外面的数据，
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
//	swap(&a, &b);  //通过地址来操作
//	printf("a=%d b=%d", a, b);
//	return 0;
//}







//#include <math.h>
//int is_prime(int n)                       //判断是否为素数的函数
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
//	scanf("%d", &year);  //假设2020
//	if (is_leap_year(year) == 1)     //year取地址后的值就是整形2020，直接传给形参n
//	{
//		printf("是闰年\n");
//	}
//	else
//		printf("是平年\n");
//	return 0;
//}
//	





//
//
//int find(int arr[], int k, int sz)  //二分查找函数
//{
//	int left = 0;
//	int right = sz-1;
//	
//	while (left <= right)       //left  <= right 找出期望找的值
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
//		printf("找不到了\n");
//
//	}
//	else
//	{
//		printf("找到了,下标是%d", ret);
//	}
//
//	return 0;
//}
//




//void add(int* p)       //每调用一次add num的值加一
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
//		for (i = 0; i < 3; i++);    //函数的嵌套调用
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
//	printf("%d", strlen("aaa"));  //函数的链式访问
//	return 0;
//}




//
//int main()
//{
//		printf("%d", printf("%d", printf("%d",43))); //printf函数的返回值是 打印字符的个数
//	return 0;
//}
//






#include  "clc.h"    //自己写的函数用" " 引起来，库函数用< >
int main()
{
	int a = 20;
	int b = 50;
	int x = sum(a, b);
	int y = sub(a, b);       //此处只是调用
	printf("sum=%d\n\n\n", x);
	printf("sub=%d\n", y);


 }