#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>

#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);      //�����������Ч���룬��Ϊͨ�����ȼ�������
//	printf("ret = %d\n", ret);			//�޷��ж�Ψһ���˳��
//	return 0;
//}


//int i;                //i��ȫ�ֱ���  Ĭ�ϳ�ʼ��Ϊ0 
//int main()
//{
//	i--;				//	-1
//	if (i > sizeof(i))         
//	{
//		printf(">\n");  //��������� >  ��Ϊ����sizeof�ķ���ֵ����ʵ��Ϊ�޷������Σ���˱��������Զ������i�Զ�ת��Ϊ�޷������ε����ݣ�
//		                 //-1��Ӧ���޷���������һ���ǳ�������֣�����4����8��32λ/64λ��
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//fun(2)��ֵ����16

int Fun(int n)
{
	if (n == 5)
		return 2;
	else
		return 2 * Fun(n + 1);//�ݹ����ջ���Ƚ��ĺ���������Ƚ��ĺ󷵻أ��ȵݹ�������ٴ�β��ͷ���ء�
}



//
////�����������������ֵ
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//	int main()
//	{
//		int arr1[] = { 1, 3, 5, 7, 9 };
//		int arr2[] = { 2, 4, 6, 8, 0 };
//		int tmp = 0;
//		int i = 0;
//		int sz = sizeof(arr1) / sizeof(arr1[0]);
//		for (i = 0; i < sz; i++)
//		{
//			tmp = arr1[i];
//			arr1[i] = arr2[i];
//			arr2[i] = tmp;
//		}
//		Print(arr1, sz);
//		Print(arr2, sz);
//		return 0;
//	}


	//�ݹ���ת�ַ���
void reverse_string(char* str)
{
	char tmp = str[0];//1
	int len = strlen(str);
	str[0] = str[len - 1];//2
	str[len - 1] = '\0';//3

	if (strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);//4
	}
		str[len - 1] = tmp;//5
	
}
	int main()
	{
		char arr[] = "hello";
		reverse_string(arr);
		printf("%s\n", arr);
		return 0;
	}