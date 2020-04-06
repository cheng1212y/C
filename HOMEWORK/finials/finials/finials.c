#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>




//此程序会进入死循环，因为i与arr[12]的地址一样，i被置为0 一直进入死循环

#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}

//计算字符串长度
// int my_strlen(const char* arr) // const使得str的值不会被修改
//{
//	int count=0;
//	assert(arr != NULL);    //判断指针不为空再使用，出错可以找到源头
//	while ((*arr) != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int arr[66] = { 0 };
//	gets(arr);                     //可以录入空格
//	printf("%d", my_strlen(arr));
//	return 0;
//}






//拷贝字符串
//char* my_strcpy( char* a, const char* b) //const 修饰数组b 后期不可修改
//{   
//	char* ret = a;
//	assert(a != NULL);//断言
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//	return ret;
//
//}
//
//int main()
//{   
//	char a[20] = "hello";
//	char b[17] = "nice";
//	printf("%s", my_strcpy(a, b));
//		return 0;
//}





//输入整形数组  奇数排前面  偶数排后面

void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;


	while (left < right)
	{
		// 从前往后，找到一个偶数，找到后停止
		while ((left < right) && (arr[left] % 2 == 0))
		{
			left++;
		}

		// 从后往前找，找一个奇数，找到后停止
		while ((left < right) && (arr[right] % 2 == 1))
		{
			right--;
		}

		// 如果偶数和奇数都找到，交换这两个数据的位置
		// 然后继续找，直到两个指针相遇
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

	int main()
	{

		int arr[10] = { 0 };
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &arr[i]);
		}
		int sz = 10;
		swap_arr(arr, sz);

		for (i = 0; i < 10; i++)
		{
			printf("%d", arr[i]);
		}

		return 0;
	}