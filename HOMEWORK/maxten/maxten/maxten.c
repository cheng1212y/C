#define _CRT_SECURE_NO_WARNINGS 1


int main()
{
	//1-100
	//个位为9：9 19 29 39 49 59 69 79 89 99
	//十位为9  90 91 92 93 94 95 96 97 98 99 
	//20
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count = %d\n", count);

	return 0;
}




//int main()
//{
//	int i= 0;
//	double sum = 0; 
//
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum = sum - 1.0 / i;	
//		}
//		else
//			sum = sum + (1.0 / i);
//	}
//	printf("%lf", sum);
//	return 0;
// }




// int main（）
// {
// 	int i = 0;
// 	两倍总和= 0.0;
// 	int flag = 1;
// 	// /（除号）来说，两边的操作数都是整数，执行的是孪生除法，只要有一个操作数是浮点数，执行的就是浮点数除法
// 	for（i = 1; i <= 100; i ++）
// 	{
// 		sum + = flag *（1.0 / i）;
// 		flag = -flag;
// 	}
// 	printf（“ sum =％lf \ n”，sum）;
//
// 	返回0;
// }




//
//
//int main() {
//
//	int a[10];

//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
 //Max = arr[0];     //j假设arr[0]是数组中最大的数字，这样计算负数的时候就不会出错的
//	for (int i = 0; i < 10; i++)  {     //拿剩下的数字与arr[0]来比较
//
//		if (a[i] > Max) {
//			Max = a[i];
//		}
//	}
//	printf("十个数中最大的是：%d", Max);
//	return 0;
//
//}


