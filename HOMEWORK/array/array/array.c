#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//void reverse(int arr[], int sz)  //逆序数组
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] =tmp;
//		left++;
//		right--;
//	}
//}
//
//void Intit(int arr[],int sz)  //数组置为0 
//{   
//	 int i = 0;
//	 for (i = 0; i < 10; i++)
//	 {
//		 arr[i] = 0;
//	 }
//}
//
//void Print(int arr[], int sz) //打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);   //逆序输出数组
//	Print(arr, sz);     //逆序输出数组
//
//	Intit(arr,sz);   //初始化数组为0
//	Print(arr, sz);  //打印出为0的数组
//	return 0;
//}
//
//






void Swap(int arr1[], int arr2[],int left,int right)//数组1的值交换到数组2中
{
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
	}
	int i = 0;

	for (i = 0; i < right + 3; i++)
	{
		printf("%d", arr2[i]);
	}

}


int main()
{   
	int arr1[] = { 1,2,3 };
	int arr2[] = { 7,8,9 };
	int left = 0;
	int i = 0;
	int right = sizeof(arr1) / sizeof(arr1[0])-1;
	for (i = 0; i < right+1 ; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	Swap(arr1, arr2, left, right);
	
	return 0;
}



