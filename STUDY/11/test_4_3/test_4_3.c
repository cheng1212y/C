#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h> //菱形的输出
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
//	printf("%d\n", **pp);    //二级指针
//	return 0;
//}


//
//int main()
//{
//	int a = 99;
//	int b = 66;
//	int c = 88;
//	int* arr[3] = { &a,&b,&c };      //指针数组
//	printf("%d", *arr[1]);
//
//	return 0;
//}



//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char make;
//}ccc;//此处定义的是全局变量           //如果使用了 typedef 类型重新定义，这里的名字就是新的名字下面可以代替Stu
//                 //没有重新定义的话 那么下面就需要书写这个名称 Stu
//int main()
//{
//	struct Stu a = { "c语言",6,'D' };   //局部变量
//	struct Stu* p = &a;            //结构体指针
//    ccc n = { "英语",999,'A' };
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
////typedef - 类型定义- 类型重定义
//int main()
//{
//	int a = 10;
//	
//	T st = { "hello", {1000, 'b', "abcdef", 4.4}, &a};//结构体内定义结构体
//	T* pt = &st;
//	printf("%lf\n", st.s.d);
//	printf("%lf\n", pt->s.d);
//	printf("%d\n", *(st.p)); //打印a的值
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
////选用print2，因为1拷贝时候 空间时间浪费大。
////函数传参的时候，参数是需要压栈的。 如果传递一个结构体对象的时候，结构体过大，参数压栈 的的系统开销比较大，所以会导致性能的下降。
////结论： 结构体传参的时候，要传结构体的地址
//
//void print1(struct Stu tmp)   //不使用 因为空间开销大
//{
//	printf("%s\t%s\t%d\t%s\n", tmp.name, tmp.id, tmp.age, tmp.sex);
//}
//
//void print2(struct Stu* ps)  //结构体 传参 使用 传址传参
//{
//	printf("%s\t%s\t%d\t%s\n", ps->name, ps->id, ps->age, ps->sex);
//}
//
//int main()
//{
//	struct Stu s = {"张三", "2019010305", 20, "男"};
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
//	ccc n = { "英语",999,'A' };  //此处ccc是个局部变量
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
//	struct student A = { "英语",999,'q' };
//	struct student B = { "数学",100,'w' };
//	printf("%s", A.name);
//	printf("%s", B.name);
//	return 0;
//}
