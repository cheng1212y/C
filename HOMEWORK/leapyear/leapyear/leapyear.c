#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()

  
{
	printf("公元1000年到2000年之间的闰年有:");
	int year = 1000;
	while (year >= 1000 && year <= 2000)
	{
		if ((year%4==0 && year%100!=0) || (year%400==0))
			printf("%d\t\t", year);
		year++;
	}
	return 0;
}





int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b && a < c && b < c)
		printf("三个数由大到小依次是:%d,%d,%d\n", c, b, a);
	if (a < b && a < c && b > c)
		printf("三个数由大到小依次是:%d,%d,%d\n", b, c, a);
	if (a > b && a < c && b < c)
		printf("三个数由大到小依次是:%d,%d,%d\n", c, a, b);
	if (a < b && a > c && b > c)
		printf("三个数由大到小依次是:%d,%d,%d\n", b, a, c);
	if (a > b && a > c && b < c)
		printf("三个数由大到小依次是:%d,%d,%d\n", a, c, b);
	if (a > b && a > c && b > c)
		printf("三个数由大到小依次是:%d,%d,%d\n", a, b, c);
	return 0;
}