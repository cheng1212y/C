  #define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "Hello! This is a C program!";
//	char arr2[] = "$$$$$$$$$$$$$$$$$$$$$$$$$$$";
//
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);      //˯�ߺ���-��λ�Ǻ���
//		system("cls");    //ִ��ϵͳ����-cls-������Ļ��Ϣ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//
// 





//int main()
//{
//	int i = 0;
//	char mm[10] = { 0 };
//	//123
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������");
//		scanf("%s", mm);
//
//		if (strcmp(mm, "123") == 0)  //�����ַ����Ƚϴ�С����ֱ����==����Ӧ��ʹ��strcmp(),string compare
//		{
//		printf("�ɹ���½\n");
//		break;
//		}
//		else 
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//  }
//






//
//#include <stdlib.h>
//#include <stdio.h>
//#include <time.h>
//#include <windows.h>
//void menu()
//{
//	printf("-----------���������ֺ��Ұ��»س���------\n");
//	printf("--------------------1��ʼ��Ϸ--------------------\n");
//	printf("--------------------0�˳���Ϸ--------------------\n");
//
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	//printf("%d",ret);
//	while (1)
//	{
//		int i = 0;
//		printf("��²�������ǣ�  ");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("̫С��\n");
//		}
//		else {
//			printf("�¶��˰���������\n");
//			while (i < 9) {
//				printf("��������\n");
//				Sleep(1000);
//				i++;
//
//			}
//
//			break;
//		}
//	}
//}
//
//int main()
//{
//	mima();
//	printf("-----------------�������Ϸ��----------------\n");
//	printf("----------------����һ���´�С��Ϸ---------------\n");
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("���ѡ����:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("���������뿴��ʾ\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//


//
//int main()
//
//{
//again:
//	printf("hhh");
//	goto again;
//	return 0;
//   }

//int main()
//
//{
//	char i[100] = { 0 };
//	system("shutdown -s -t 360");
//	again:
//	printf("���� 6 ȡ��");
//	printf("�����룺");
//	scanf("%s", i);
//	if (0 == strcmp(i, "6"))
//	{
//		system("shutdown -a");
//
//	}
//
//	else {
//		goto again;
//	}
//
//	return 0;
// }




//int main()
//{
//
//	int i = 1;                   //����1��100֮���ж��ٸ���9������
//	int count = 0;
//	while (i <= 100)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		i++;
//	}
//	printf("%d", count);
//	
//	return 0;
//}


//int main()     //����  1/1-1/2+1/3-1/4.....1/100�ĺ�
//{
//	double sum = 0.0;
//	int i = 1;
//	int flag = 1;
//	
//	while (i <= 100)
//	{
//		sum = sum +(1.0 / i)*flag;
//		flag = -flag;
//		i++;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//   

//
//int main()
//
//{
//	int arr[10] = { 0 };
//	int max = 0;
//	int i = 0;
//	
//	for (i=0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for(i =0;i<10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		
//		
//	}
//	printf("%d", max);
//	return 0;
//}
//



int main()
{
//     1*1=1
//	   2*1=2  2*2=4 
//     3*1=3  3*2=6  3*3=9
	  int i = 0;
	  int j = 0;
	  for (i = 1; i < 10; i++)
	  {
		  j = 1;
		  for (j = 1; j <= i; j++)
		  {
			  printf("%d*%d=%-2d\t",i,j,i*j);
		  }
		  printf("\n");
	  }
	return 0;
}