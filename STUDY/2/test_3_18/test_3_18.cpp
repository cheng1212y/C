#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//struct Student   //����һ��ѧ��������
//{
//	
//	char sex[6];
//	int age;
//	char id[66];
//};
//int main()
//{
//	struct Student tom = { "��",18, "66666666"};   //����һ��ѧ��
//	printf("1�Ա�:%s\n����:%d\nѧ��:%s\n", tom.sex, tom.age, tom.id);//  . Ϊ�ṹ��Ա���ʲ�����
//	struct Student* A = &tom;                                        //������һ���ṹ��ָ�� A ��ָ��ṹ��tom
//	printf("2�Ա�:%s\n����:%d\nѧ��:%s\n", (*A).sex, (*A).age, (*A).id);
//	printf("3�Ա�:%s\n����:%d\nѧ��:%s\n", A->sex, A->age, A->id);      // (*A).��A->�ȼ�
//	return 0;
//}



//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a < 18)
//		printf("δ����\n");           //if ����ı��ʽΪ��ʱ�� ִ�� ����ִ��
//	if (a>=18&&a<=30)
//		printf("����\n");
//	if (a > 30 && a < 50)
//		printf("����\n");
//	return 0;
//}
//
//




//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)   
//
//			printf("%d\n", i);   //���100���ڵ�����
//			i++;
//	}
//	return 0;
//
//}

//
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//			printf("%d\n", i);   //���100���ڵ�����
//			i = i + 2;
//	}
//	return 0;
//
//}
//

//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//
//}




//int main()
//{
//	printf("�������ڼ����ж��ǲ�����ĩ\n");   
//	int day = 0;
//	scanf("%d", &day);                         
//	switch (day)                                          //switch���������α��ʽ
//	{ 
//	case 1:												//case ���������γ������ʽ
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("today is weekday");
//		break;                                           //������break���� ֹͣ��������caseһֱ���»�
//	case 6:
//	case 7:
//		printf("today is weekend");
//		break;
//	default:											//�����е�case��䶼�������ʱ�򣬾ͻ����default��䣬ͬ�������ĺ���Ҳ��Ҫ����break
//		printf("�������");
//		break;
//	}
//	return 0;
//}
//








//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{           //switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);         //����������m=5 n=3
//	return 0;
//}
//
//
//


//
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;                            // switch ����е� break��ʹ��ѭ������while ֱ��ִ��while��������������
//		printf("%d\n", i);
//		i++;
//	 }
//	printf("���Ѿ�����ѭ��");
//	return 0;
//
//}



int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;
	}
	printf("���Ѿ�����ѭ��");    //��ʱ������ʾ��仰   ��Ϊcontinue ���ֻ���������������䣬Ȼ�󷵻ص�while�ײ�ȥִ��.
	return 0;

}
