#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


//int main()    //��ѭ��ԭ����i��arr[12]�ĵ�ַһ�� ������Ϊ0 ������ѭ��
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (i = 0; i <=12; i++)
//	{
//		arr[i] = 0; 
//		printf("hehe\n");    
//	}
//
//	return 0;
//}



//////////////////const  assertʹ�ó���׳

char* my_strcpy(char* dest, const char* src)   //constʹ��ָ���ֵ���ܸı� �������д����������
{
	char *ret = dest;
	assert(dest != NULL);//����
	assert(src != NULL);//����

	//��srcָ����ַ���������destָ��Ŀռ��У�����'\0'
	while (*dest++ = *src++)
	{
		;
	}
	return ret;//����Ŀ�ĵص���ʼ��ַ
}


int main()
{
	char arr1[20] = "######";
	char arr2[] = "abcdef";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}



//ģ��strlen
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);

	printf("%d\n", len);

	return 0;
}





const����ָ��
1. const ����*����ߣ����ε��� ָ��ָ������ݣ�*p����ʹ��ָ��ָ������ݣ�����ͨ��p���ı��� 
����ָ�������p���ǿ��Ըı��
2. const ����*���ұߣ����ε��� ָ���������p��,ʹ��ָ����������ܱ��޸�
����ָ��ָ������ݣ�*p�����Ըı�

int  main()
{
	const int num = 10;//num�������޸�
	int n = 100;

	const int * const p = &num;
	*p = 0;
	p = &n;

	printf("num = %d\n", num);
	printf("%d\n", *p);//100
	return 0;
}

