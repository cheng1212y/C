#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)    //如果等于1 说明第一躺排序都没有进行完全是顺序的，直接跳出循环 输出结果就是顺序
		{
			break;
		}


	}
}
void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArr(arr, sz); //排序前
	BubbleSort(arr, sz);
	PrintArr(arr, sz);//排序后
	return 0;
}