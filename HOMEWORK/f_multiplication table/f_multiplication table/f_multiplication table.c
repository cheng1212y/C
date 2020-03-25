
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void table(int a)
{
	int i = 0;
	for (i = 1; i <= a; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d\t", i, j, i*j);

		}
		printf("\n");
	}

}
int main()
{
	int a = 0;
	scanf("%d", &a);
	table(a);
	return 0;
}