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
//		if (a == arr[i])                       // 通过数组的遍历来查找
//		{
//			printf("找到了");
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到");
//	}
//	return 0;
// }





int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);     //二分查找法  寻找数字是否在有序数字中
    //printf("%d", sz);
	int a = 7;
	int i = 0;
	int left = 0;
	int right = sz-1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right)/2;           //主要是通过 left 和right 来卡取值
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
			printf("找到了，下标是：%d\n",mid);
			break;
		     }
	}
	if (left > right)
	{
		printf("找不到这样的数字");
	}
	return 0;
 }







