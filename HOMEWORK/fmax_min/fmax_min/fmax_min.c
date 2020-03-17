#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 void chose(int x, int y)

	{
        if (x > y)
		{
			printf("max=%d\n",x);           //函数在使用时候要有返回值，打印函数的时候可以是void，下面在调用
		}
		else
			if (x<y)
			{
				printf("max=%d\n", y);
		    }
			      else
			      {
				printf("两数相等\n");
			      } 
    }
	    int main()
	    {
       	int a = 0;
	    int b = 0;
	    printf("请输入两个数比较大小\n");
	    scanf("%d %d", &a, &b);
	    chose(a,b);               
	    return 0;
	    }


