#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//函数声明和定义
#include "add.h" 
/*
//函数声明
int Add(int x, int y);

//函数的定义
int Add(int x, int y)
{
	return x + y;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	//加法
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
*/

//函数递归

//接受一个整型值（无符号），按照顺序打印他的每一位。
//输入1234，输出：1 2 3 4

//%d是打印有符号的整数（会有正负数）
//%u是打印无符号的整数

//结果是 4 3 2 1
/*
int main()
{
	unsigned int num = 0;
	scanf("%u ", &num);
	while (num)
	{
		printf("%d ", num % 10);
		num = num / 10;
	}
	
	return 0;
}
*/

/*
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num); //接受一个整型值（无符号),按照顺序打印它的每一位


	return 0;
}
*/

//编写函数不允许创建临时变量，求字符串的长度

//求字符串的长度
#include <string.h>

//int my_strlen(char str[])//参数部分写成数组的形式

/*
int my_strlen(char* str)//参数部分写出指针的形式
{
	int count = 0;//计数，临时变量
	while (*str != '\0')
	{
		count++;
		str++;//找下一个字符
	}
	return count;
}
*/

//递归求解
/*
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = "abc"; //[a,b,c \0]
	//char*
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}
*/

//递归与迭代

//迭代的方式
/*
int fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
	}
}
*/

//循环的方法
/*
int fac(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int main() 
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("ret=%d\n", ret);
	return 0;
}
*/

//求第n个斐波那契数
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55..
int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}