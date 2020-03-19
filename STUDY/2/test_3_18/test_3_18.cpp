#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//
//struct Student   //创建一个学生的类型
//{
//	
//	char sex[6];
//	int age;
//	char id[66];
//};
//int main()
//{
//	struct Student tom = { "男",18, "66666666"};   //定义一个学生
//	printf("1性别:%s\n年龄:%d\n学号:%s\n", tom.sex, tom.age, tom.id);//  . 为结构成员访问操作符
//	struct Student* A = &tom;                                        //创建了一个结构体指针 A 它指向结构体tom
//	printf("2性别:%s\n年龄:%d\n学号:%s\n", (*A).sex, (*A).age, (*A).id);
//	printf("3性别:%s\n年龄:%d\n学号:%s\n", A->sex, A->age, A->id);      // (*A).与A->等价
//	return 0;
//}



//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a < 18)
//		printf("未成年\n");           //if 后面的表达式为真时候 执行 否则不执行
//	if (a>=18&&a<=30)
//		printf("青年\n");
//	if (a > 30 && a < 50)
//		printf("中年\n");
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
//			printf("%d\n", i);   //输出100以内的奇数
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
//			printf("%d\n", i);   //输出100以内的奇数
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
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//
//}




//int main()
//{
//	printf("输入星期几，判断是不是周末\n");   
//	int day = 0;
//	scanf("%d", &day);                         
//	switch (day)                                          //switch后面是整形表达式
//	{ 
//	case 1:												//case 后面是整形常量表达式
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("today is weekday");
//		break;                                           //当碰见break语句才 停止，否则会从case一直往下滑
//	case 6:
//	case 7:
//		printf("today is weekend");
//		break;
//	default:											//当所有的case语句都不满足的时候，就会进入default语句，同样的它的后面也需要加上break
//		printf("输入错误");
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
//		{           //switch允许嵌套使用
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
//	printf("m = %d, n = %d\n", m, n);         //输出结果将是m=5 n=3
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
//			break;                            // switch 语句中的 break会使得循环跳出while 直接执行while大括号意外的语句
//		printf("%d\n", i);
//		i++;
//	 }
//	printf("我已经跳出循环");
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
	printf("我已经跳出循环");    //此时将不显示这句话   因为continue 语句只会跳出它后面的语句，然后返回到while首部去执行.
	return 0;

}
