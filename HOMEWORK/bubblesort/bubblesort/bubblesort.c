#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)    //�������1 ˵����һ������û�н�����ȫ��˳��ģ�ֱ������ѭ�� ����������˳��
		{
			break;
		}


	}
}
void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArr(arr, sz); //����ǰ
	BubbleSort(arr, sz);
	PrintArr(arr, sz);//�����
	return 0;
}