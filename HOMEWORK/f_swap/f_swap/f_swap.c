#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����������ab�ĵ�ַ �����������޸Ļ�ֱ�Ӳ�����������ݣ�
void swap(int* x, int* y)       //����swapʱ�� x��y��ʼ�����µ��ڴ�ռ�
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
	swap(&a, &b);  //ͨ����ַ������
	printf("a=%d b=%d", a, b);
	return 0;
}

