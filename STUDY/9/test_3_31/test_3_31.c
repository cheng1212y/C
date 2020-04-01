#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>

#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);      //此类代码是无效代码，因为通过优先级与结合性
//	printf("ret = %d\n", ret);			//无法判断唯一求解顺序
//	return 0;
//}


//int i;                //i是全局变量  默认初始化为0 
//int main()
//{
//	i--;				//	-1
//	if (i > sizeof(i))         
//	{
//		printf(">\n");  //输出将会是 >  因为但是sizeof的返回值类型实际为无符号整形，因此编译器会自动将左侧i自动转换为无符号整形的数据，
//		                 //-1对应的无符号整形是一个非常大的数字，超过4或者8（32位/64位）
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//fun(2)的值？？16

int Fun(int n)
{
	if (n == 5)
		return 2;
	else
		return 2 * Fun(n + 1);//递归就像栈，先进的后出，它是先进的后返回，等递归结束，再从尾到头返回。
}



//
////交换两个整形数组的值
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//	int main()
//	{
//		int arr1[] = { 1, 3, 5, 7, 9 };
//		int arr2[] = { 2, 4, 6, 8, 0 };
//		int tmp = 0;
//		int i = 0;
//		int sz = sizeof(arr1) / sizeof(arr1[0]);
//		for (i = 0; i < sz; i++)
//		{
//			tmp = arr1[i];
//			arr1[i] = arr2[i];
//			arr2[i] = tmp;
//		}
//		Print(arr1, sz);
//		Print(arr2, sz);
//		return 0;
//	}


	//递归逆转字符串
void reverse_string(char* str)
{
	char tmp = str[0];//1
	int len = strlen(str);
	str[0] = str[len - 1];//2
	str[len - 1] = '\0';//3

	if (strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);//4
	}
		str[len - 1] = tmp;//5
	
}
	int main()
	{
		char arr[] = "hello";
		reverse_string(arr);
		printf("%s\n", arr);
		return 0;
	}