#define _CRT_SECURE_NO_WARNINGS 1


int main()
{
	//1-100
	//��λΪ9��9 19 29 39 49 59 69 79 89 99
	//ʮλΪ9  90 91 92 93 94 95 96 97 98 99 
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




// int main����
// {
// 	int i = 0;
// 	�����ܺ�= 0.0;
// 	int flag = 1;
// 	// /�����ţ���˵�����ߵĲ���������������ִ�е�������������ֻҪ��һ���������Ǹ�������ִ�еľ��Ǹ���������
// 	for��i = 1; i <= 100; i ++��
// 	{
// 		sum + = flag *��1.0 / i��;
// 		flag = -flag;
// 	}
// 	printf���� sum =��lf \ n����sum��;
//
// 	����0;
// }




//
//
//int main() {
//
//	int a[10];

//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
 //Max = arr[0];     //j����arr[0]���������������֣��������㸺����ʱ��Ͳ�������
//	for (int i = 0; i < 10; i++)  {     //��ʣ�µ�������arr[0]���Ƚ�
//
//		if (a[i] > Max) {
//			Max = a[i];
//		}
//	}
//	printf("ʮ�����������ǣ�%d", Max);
//	return 0;
//
//}


