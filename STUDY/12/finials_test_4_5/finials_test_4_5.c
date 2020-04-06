#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


//int main()    //死循环原因是i与arr[12]的地址一样 ，被置为0 进入死循环
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (i = 0; i <=12; i++)
//	{
//		arr[i] = 0; 
//		printf("hehe\n");    
//	}
//
//	return 0;
//}



//////////////////const  assert使得程序健壮

char* my_strcpy(char* dest, const char* src)   //const使得指向的值不能改变 如果两个写反，将报错
{
	char *ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言

	//把src指向的字符串拷贝到dest指向的空间中，包含'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//返回目的地的起始地址
}


int main()
{
	char arr1[20] = "######";
	char arr2[] = "abcdef";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}



//模拟strlen
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);

	printf("%d\n", len);

	return 0;
}





const修饰指针
1. const 放在*的左边，修饰的是 指针指向的内容（*p），使得指针指向的内容，不能通过p来改变了 
但是指针变量（p）是可以改变的
2. const 放在*的右边，修饰的是 指针变量本身（p）,使得指针变量本身不能被修改
但是指针指向的内容（*p）可以改变

int  main()
{
	const int num = 10;//num不允许被修改
	int n = 100;

	const int * const p = &num;
	*p = 0;
	p = &n;

	printf("num = %d\n", num);
	printf("%d\n", *p);//100
	return 0;
}

