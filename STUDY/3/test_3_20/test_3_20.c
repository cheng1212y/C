#define _CRT_SECURE_NO_WARNINGS 1

#include   <stdio.h>

//
//int main()
//{    
//	int ch = 0; 
//	while ((ch = getchar()) != EOF)   //EOF ���ļ������ı�־ ��ʱ����һ���ַ��ͻ��ӡһ���ַ�
//    putchar(ch); 
//	return 0; 
//}

//int main()
//
//{  
//	char input[30] = { 0 };
//	int a = 0;
//	printf("����������:\n");
//	scanf("%s", &input);
//	printf("������Y/Nȷ������");
//	a = getchar();
//	if(a = ='Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//	return 0;
// }


//int main()
//
//{
//	char input[30] = { 0 };
//	int a = 0;
//	printf("����������:\n");
//	scanf("%s", &input);
//	printf("������Y/Nȷ������");
//	while ((a = getchar()) != '\n');          //��ʱһֱ��ȡ��ֱ����ȡ��\n�Ż�����ѭ������������Ŀ������ջ������� 
//	{
//		;
//	}
//	a = getchar();
//	if (a == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//	return 0;
//}



//int main()
//
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')   //����Ĳ���0-9ʱ�򣬲����������һֱѭ���������롣
//			continue;
//			putchar(ch);
//	}
//	return 0;
// }
//




//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	�����±��Ǵ�0��ʼ
//	for (i = 0; i < 10; i++)
//	
//		printf("%d ", arr[i]);
//	return 0;
//}



// int main()
//{
//	//forѭ���еĳ�ʼ�����жϡ����� ����ѡ���Ե�ʡ��
//	//���жϲ��ֱ�ʡ����ζ���жϲ��ֺ�Ϊ��
//
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;    //��i++�� ����5 �������ѭ��
//
//		printf("%d ", i);
//		i++;
//	}
//	while (i<10);
//	return 0;
//}
//
//int main()
//{ 
//	
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;             //����n��
//		
//	}
//	printf("%d\n", ret);
//	return 0;
//  }








int main()
{

	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)   // 3!+2!+1!=  ???
	{
		 
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;             

		}
		sum = sum + ret;       
	}
	printf("%d\n", sum);   //�����12  �Ǵ���Ľ�� ,��Ϊ��ʱǶ��ѭ��������ڶ����ĳ�ʼֵ��д����������棬
	                        //д������㣬��ʹ�õڶ���ѭ���� ��ʼֵ�����ۼӡ�
	return 0;
}



int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	

	for (n = 1; n <= 10; n++)         //1��+++10�� ��������
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);

	return 0;



// 
//
//         
//int main()
//{
//	int a = 0;
//	a = getchar();
//	putchar(a);
//	return 0;
//
//}
//

