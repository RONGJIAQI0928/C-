#define _CRT_SECURE_NO_WARNINGS
/*
数据类型
1.内置的
char
short
int
long
long long
float
double
2.自定义
struct ...

*/

#include <stdio.h>


//打印小飞机
/*
int main()
{
	printf("     **\n");
	printf("     **\n");
	printf("************\n");
	printf("************\n");
	printf("   *    *   \n");
	printf("   *    *   \n");
	return 0;
}
*/

/*
字符串的结束标示是\0
0 - 数字0
'0' - 字符0 - ASCII值是48
'\0' - 字符0 - ASCII值是0
EOF - end of file 文件的结束标志 值是-1 

*/

/*
int main()
{
	int arr[10] = { 1 };
	int n = 10;
	int arr[n];
	//c99标准之前，数组的大小都是用常量或者常量表达式来指定
	int arr2[10] = { 0 }; //ok
	int arr3[3 + 7] = { 1,2,3,4 }; //ok

	//c99标准之后，支持了变长数组，这个时候允许数组的大小是变量，但是这种指定方式的数组是不能初始化的。
	int m = 100;
	int arr4[m];

	return 0;
}

*/

/*
//vs对c99种的一些语法支持不是很好，不支持变长数组的

int main()
{
	char arr[10] = "hello you";
	return 0;
}
*/

//求两个数的较大值
//写一个函数求两个数的较大值
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	
	if (a > b)
	{
		printf("%d\n", a);
	}
	else
	{
		printf("%d\n", b);
	}
		
	return 0;
}
*/

/*
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int max = Max(a, b);
	printf("%d\n", max);
}
*/

//已知一个函数y=f(x),当x<0时，y=1; 当x=0时,y=0; 当x > 0时, y =-1.
int main()
{
	//输入
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	//计算
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else 
		y = 1;
	//输出
	printf("%d\n", y);

	return 0;

}