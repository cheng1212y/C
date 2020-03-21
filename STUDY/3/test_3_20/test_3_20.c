#define _CRT_SECURE_NO_WARNINGS 1

#include   <stdio.h>

//
//int main()
//{    
//	int ch = 0; 
//	while ((ch = getchar()) != EOF)   //EOF 是文件结束的标志 此时输入一个字符就会打印一个字符
//    putchar(ch); 
//	return 0; 
//}

//int main()
//
//{  
//	char input[30] = { 0 };
//	int a = 0;
//	printf("请输入密码:\n");
//	scanf("%s", &input);
//	printf("请输入Y/N确认密码");
//	a = getchar();
//	if(a = ='Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//	return 0;
// }


//int main()
//
//{
//	char input[30] = { 0 };
//	int a = 0;
//	printf("请输入密码:\n");
//	scanf("%s", &input);
//	printf("请输入Y/N确认密码");
//	while ((a = getchar()) != '\n');          //此时一直读取，直到读取到\n才会跳出循环，这样做的目的是清空缓冲区。 
//	{
//		;
//	}
//	a = getchar();
//	if (a == 'Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//	return 0;
//}



//int main()
//
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')   //输入的不是0-9时候，不会输出。会一直循环进行输入。
//			continue;
//			putchar(ch);
//	}
//	return 0;
// }
//




//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	数组下表是从0开始
//	for (i = 0; i < 10; i++)
//	
//		printf("%d ", arr[i]);
//	return 0;
//}



// int main()
//{
//	//for循环中的初始化、判断、调整 可以选择性的省略
//	//当判断部分被省略意味着判断部分恒为真
//
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;    //当i++后 等于5 会进行死循环
//
//		printf("%d ", i);
//		i++;
//	}
//	while (i<10);
//	return 0;
//}
//
//int main()
//{ 
//	
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;             //计算n！
//		
//	}
//	printf("%d\n", ret);
//	return 0;
//  }








int main()
{

	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)   // 3!+2!+1!=  ???
	{
		 
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;             

		}
		sum = sum + ret;       
	}
	printf("%d\n", sum);   //输出是12  是错误的结果 ,因为当时嵌套循环，如果第二个的初始值不写在最近的上面，
	                        //写在了外层，会使得第二个循环的 初始值不断累加。
	return 0;
}



int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	

	for (n = 1; n <= 10; n++)         //1！+++10！ ？？？？
	{
		ret = ret * n;
		sum = sum + ret;
	}

	printf("%d\n", sum);

	return 0;



// 
//
//         
//int main()
//{
//	int a = 0;
//	a = getchar();
//	putchar(a);
//	return 0;
//
//}
//

