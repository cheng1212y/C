#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ݹ����n��쳲�������     1 1 2 3 5 8 13 21......     n<=2 , 1
												//		n>2  ,fib(n-1)+fib(n-2)
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()

{
	int a = 0;
	scanf("%d", &a);
	int r = fib(a);
	printf("%d", r);
	return 0;
}



//�ǵݹ�
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int r = fib(a);
	printf("%d", r);
	return 0;
}





//�ݹ�ʵ��n��k�η�����
int squ(int n, int m)
{
	if (m == 0)
		return 1;
	else
	{
		return n * squ(n, m - 1);
	}

}
int main()
{
	int a = 0.0;
	int b = 0.0;
	scanf("%d%d", &a, &b);
	int r = squ(a, b);
	printf("%d��%d�η��Ľ���ǣ�\n\n", a, b);
	printf("%d", r);
	return 0;
}





//�ݹ����1987 �ĸ�λ�ĺ�
int  print(unsigned int n)
{

	if (n > 9)
	{
		return (n % 10) + (print(n / 10));
	}
	return n % 10;
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);  //123
	int r = print(num);
	printf("%d", r);
	return 0;
}





//�ݹ�����ַ������ַ���
int  mystrlen(char* str)
{
	if (*str != '\0')
		return 1 + mystrlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "hello";
	int r = mystrlen(arr);
	printf("%d", r);
	return 0;
}


//�ǵݹ�//
int mystrlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int a = 0;
	int r = 0;
	char arr[] = "";
	scanf("%s", &arr);
	r = mystrlen(arr);
	printf("%d", r);
	return 0;
}





//�ݹ��ӡһ������ÿһλ  2020  ��ӡ2 0 2 0
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d  ", n % 10);
}
int main()
{
	int num = 0;

	scanf("%d", &num);
	print(num);

	return 0;
}




//�ݹ���n��
int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1); //�����˳�����   n=3      n=2      n=1
}											// 3x����ֵ  2x����ֵ  1x����ֵ
int  main()									//	3x2        2x1      1x1
{
	int n = 0;
	int i = 0;
	int c = 0;
	scanf("%d", &n);
	c = fac(n);
	printf("%d", c);
}

//ͨ���ǵݹ�ķ�ʽ�� n��//
int fac(int a)
{
	int result = 1;
	while (a > 1)
	{
		result *= a;
		a -= 1;
	}
	return result;
}
int main()
{
	int n = 0;
	int r = 0;
	scanf("%d", &n);
	r = fac(n);
	printf("%d", r);
	return 0;
}

