#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h> //���ε����
//int main()
//{
//
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		   for (j = 0; j < 2 * i + 1; j++)
//		   {  
//			   printf("*");
//			
//		   }
//		   printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{   
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//
//		}
//		for (j = 0; j < 2 * (line - 1 - i) -1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	   return 0;
//}



//
//int main()
//{
//	int a = 666;
//	int* p = &a;
//	int** pp = &p;
//	printf("%d\n", **pp);    //����ָ��
//	return 0;
//}


//
//int main()
//{
//	int a = 99;
//	int b = 66;
//	int c = 88;
//	int* arr[3] = { &a,&b,&c };      //ָ������
//	printf("%d", *arr[1]);
//
//	return 0;
//}



//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char make;
//}ccc;//�˴��������ȫ�ֱ���           //���ʹ���� typedef �������¶��壬��������־����µ�����������Դ���Stu
//                 //û�����¶���Ļ� ��ô�������Ҫ��д������� Stu
//int main()
//{
//	struct Stu a = { "c����",6,'D' };   //�ֲ�����
//	struct Stu* p = &a;            //�ṹ��ָ��
//    ccc n = { "Ӣ��",999,'A' };
//	printf("%s", a.name);
//	printf("%s", (*p).name);
//	printf("%s", p->name);
//	printf("%s", n.name);
//	return 0;
//}



//
//struct S
//{
//	int a;
//	char c;
//	char arr[10];
//	double d;
//};
//typedef struct R
//{
//	char buf[20];
//	struct S s;
//	int *p;
//}T;
//
////typedef - ���Ͷ���- �����ض���
//int main()
//{
//	int a = 10;
//	
//	T st = { "hello", {1000, 'b', "abcdef", 4.4}, &a};//�ṹ���ڶ���ṹ��
//	T* pt = &st;
//	printf("%lf\n", st.s.d);
//	printf("%lf\n", pt->s.d);
//	printf("%d\n", *(st.p)); //��ӡa��ֵ
//	
//	return 0;
//}




//struct Stu
//{
//
//	char name[20];
//	char id[18];
//	short age;
//	char sex[5];
//};
//
////ѡ��print2����Ϊ1����ʱ�� �ռ�ʱ���˷Ѵ�
////�������ε�ʱ�򣬲�������Ҫѹջ�ġ� �������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ �ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
////���ۣ� �ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
//
//void print1(struct Stu tmp)   //��ʹ�� ��Ϊ�ռ俪����
//{
//	printf("%s\t%s\t%d\t%s\n", tmp.name, tmp.id, tmp.age, tmp.sex);
//}
//
//void print2(struct Stu* ps)  //�ṹ�� ���� ʹ�� ��ַ����
//{
//	printf("%s\t%s\t%d\t%s\n", ps->name, ps->id, ps->age, ps->sex);
//}
//
//int main()
//{
//	struct Stu s = {"����", "2019010305", 20, "��"};
//	print1(s);
//	print2(&s);
//
//	return 0;
//}
//




//typedef struct student
//{
//	char name[20];
//	int age;
//	char make;
//}ccc;
//
//int main()
//{
//	ccc n = { "Ӣ��",999,'A' };  //�˴�ccc�Ǹ��ֲ�����
//	printf("%s", n.name);
//	return 0;
//}
//
//
//
//
//
// struct student
//{
//	char name[20];
//	int age;
//	char make;
//}A;
//
//int main()
//{
//	struct student A = { "Ӣ��",999,'q' };
//	struct student B = { "��ѧ",100,'w' };
//	printf("%s", A.name);
//	printf("%s", B.name);
//	return 0;
//}
