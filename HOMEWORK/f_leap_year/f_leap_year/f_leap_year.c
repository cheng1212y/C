
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);  //假设2020
//	if (is_leap_year(year) == 1)     //year取地址后的值就是整形2020，直接传给形参n
//	{
//		printf("是闰年\n");
//	}
//	else
//		printf("是平年\n");
//	return 0;
//}





#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>


int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int count = 0;
	int i = 100;
	while (i <= 200)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\n", i);
			count++;
		}
		i++;
	}
	printf("count=%d\n", count);
	return 0;
}