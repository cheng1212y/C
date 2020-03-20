#define _CRT_SECURE_NO_WARNINGS 1
     #include <stdio.h>
int main()
{
	printf("1到100之间是3的倍数有：\n");     
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0) 
			printf("%d\n", i);
			i++;
	}
	return 0;
}









int main ( )

{
	printf("100到200之间的素数有");                    //计算素数
	int i = 100;
	while (i < 200)           
	{
		int j = 2;
		while (j < i)
		{
			if (i%j == 0)
				break;
			j++;
		}
		if (j == i)
		{
			printf("%d\t\t", i);
		}
		i++;
	}
	return  0;
}





int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int x = 0;
	printf("请输入两个整数来计算最大公因子：\n");   
	   scanf("%d%d", &a, &b);
	   if (a < b)                                    //为了使得大数在前小数在后
	   {
		   x = b;
		   b = a;
		   a = x;
	   }  
	   while(b!=0)
	   {
		   c = a % b;
		   a = b;
		   b = c;
	   }
	   printf("两数的最大公约数是:%d\t\t", a);
	return 0;
}



