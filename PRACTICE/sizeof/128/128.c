#include<stdio.h>
int main()
{
	//int a = 100;
	//printf("%d\n",sizeof(a));
	//printf("%d\n",sizeof a);        //����������4
	//printf("%d\n",sizeof (int));

	//printf("%d\n",sizeof int);      //����д��

	int arr[] = { 0,1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
		printf("%d", sz);
	return 0;


}
