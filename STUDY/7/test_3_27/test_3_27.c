#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{10} };   //二维数组的使用
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
//			printf("%p ", &arr[i][j]);  //二维数组在内存中是连续存储的，地址是连续的
//		}
//		printf("\n");
//	}
//	return 0;
//}




 //冒泡排序算法
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
//		if (flag == 1)    //如果等于1 说明第一躺排序都没有进行完全是顺序的，直接跳出循环 输出结果就是顺序
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
//	 PrintArr(arr, sz); //排序前
//	 BubbleSort(arr,sz);
//	 PrintArr( arr, sz);//排序后
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));  //  10  9  
//	return 0;										// sizeof计算\0 strlen不计算，  字符串中自带\0 
//}



int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	//数组名是什么？
	//数组名是数组首元素的地址
	//注意：有两个例外
	//1. sizeof(arr) - sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	//2. &arr - &数组名 - 数组名表示整个数组， &数组名取出的是整个数组的地址
	printf("%p\n", arr);             //数组首元素地址
	printf("%p\n", arr + 1);	     //数组首元素地址 +1

	printf("%p\n", &arr[0]);		//数组首元素地址
	printf("%p\n", &arr[0] + 1);    //数组首元素地址 +1 

	printf("%p\n", &arr);          //取出的是整个数组的地址，但是用首元素地址来表示整个数组的地址
	printf("%p\n", &arr + 1);      //整个数组地址块的基础上 +1
	//printf("%d\n", *arr);      //数组首元素
	return 0;
}