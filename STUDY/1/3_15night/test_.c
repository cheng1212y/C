#define _CRT_SECURE_NO_WARNINGS 1

static int a = 666;  

            
 static int add(int x, int y)                     //static 修饰函数和全局变量的时候，会使得作用域减小到static所在的文件
{
	int z = x + y;
	return z;
 }