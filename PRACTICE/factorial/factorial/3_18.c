#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int t = 1;
	int i = 2;
	int a = 0;
	printf("����������������Ľ׳�\n");
	scanf("%d", &a);
	while (i <= a)
	{
		t = t * i;  
			i = i + 1;
	}
	printf("%d�Ľ׳˽����%d",a,t);  //����n�Ľ׳˺����ֵ
	return 0;

}