#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//传进来的是ab的地址 这样函数的修改会直接操作外面的数据，
void swap(int* x, int* y)       //调用swap时候 x，y开始开辟新的内存空间
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 999;
	int b = 8;
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);  //通过地址来操作
	printf("a=%d b=%d", a, b);
	return 0;
}

