#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
  int main ()
  {
	char arr1[] = "*********************************";    //输出一个9的菱形

    char arr2[] = "                                 ";
	int l =16;
	int r = 16;
	int m = 16;
	int left = 0;
	int right = 32;
	printf("                *\n");
	while (l>0 && r<33 )
	{
		arr2[m] = arr1[m];
		arr2[l - 1] = arr1[l - 1];
		arr2[r + 1] = arr1[r + 1];
		printf("%s\n", arr2);
		Sleep(10);
		//system("cls");
		l--;
		r++;
	}
	
	char arr3[] = "*********************************";
	char arr4[] = "                                 ";
	while (left<right)
	{
		arr3[left] = arr4[left];
		arr3[right] = arr4[right];
		printf("%s\n", arr3);
		Sleep(10);
		left++;
		right--;
	}
	return 0;
}