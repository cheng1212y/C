#define _CRT_SECURE_NO_WARNINGS 1
     #include <stdio.h>
int main()
{
	printf("1��100֮����3�ı����У�\n");     
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
	printf("100��200֮���������");                    //��������
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
	printf("��������������������������ӣ�\n");   
	   scanf("%d%d", &a, &b);
	   if (a < b)                                    //Ϊ��ʹ�ô�����ǰС���ں�
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
	   printf("���������Լ����:%d\t\t", a);
	return 0;
}



