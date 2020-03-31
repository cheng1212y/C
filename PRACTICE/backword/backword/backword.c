#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
void back(char* arr)        //递归逆序一个字符串
{   
	char tmp = *arr;
	int len = strlen(arr);
	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)  //指向第二个字符 
			back(arr + 1);
		*(arr + len - 1) = tmp;
 }
int main ()
{	char arr[] = "happy day";
    printf("%s", arr);
	back(arr);
	printf("%s", arr);
	return 0;
}
