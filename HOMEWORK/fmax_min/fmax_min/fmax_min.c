#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
 void chose(int x, int y)

	{
        if (x > y)
		{
			printf("max=%d\n",x);           //������ʹ��ʱ��Ҫ�з���ֵ����ӡ������ʱ�������void�������ڵ���
		}
		else
			if (x<y)
			{
				printf("max=%d\n", y);
		    }
			      else
			      {
				printf("�������\n");
			      } 
    }
	    int main()
	    {
       	int a = 0;
	    int b = 0;
	    printf("�������������Ƚϴ�С\n");
	    scanf("%d %d", &a, &b);
	    chose(a,b);               
	    return 0;
	    }


