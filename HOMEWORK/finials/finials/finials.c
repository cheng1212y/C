#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>




//�˳���������ѭ������Ϊi��arr[12]�ĵ�ַһ����i����Ϊ0 һֱ������ѭ��

#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}

//�����ַ�������
// int my_strlen(const char* arr) // constʹ��str��ֵ���ᱻ�޸�
//{
//	int count=0;
//	assert(arr != NULL);    //�ж�ָ�벻Ϊ����ʹ�ã���������ҵ�Դͷ
//	while ((*arr) != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int arr[66] = { 0 };
//	gets(arr);                     //����¼��ո�
//	printf("%d", my_strlen(arr));
//	return 0;
//}






//�����ַ���
//char* my_strcpy( char* a, const char* b) //const ��������b ���ڲ����޸�
//{   
//	char* ret = a;
//	assert(a != NULL);//����
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//	return ret;
//
//}
//
//int main()
//{   
//	char a[20] = "hello";
//	char b[17] = "nice";
//	printf("%s", my_strcpy(a, b));
//		return 0;
//}





//������������  ������ǰ��  ż���ź���

void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;


	while (left < right)
	{
		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
		while ((left < right) && (arr[left] % 2 == 0))
		{
			left++;
		}

		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
		while ((left < right) && (arr[right] % 2 == 1))
		{
			right--;
		}

		// ���ż�����������ҵ����������������ݵ�λ��
		// Ȼ������ң�ֱ������ָ������
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

	int main()
	{

		int arr[10] = { 0 };
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &arr[i]);
		}
		int sz = 10;
		swap_arr(arr, sz);

		for (i = 0; i < 10; i++)
		{
			printf("%d", arr[i]);
		}

		return 0;
	}