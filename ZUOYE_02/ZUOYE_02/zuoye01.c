#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//写代码将三个整数按从大到小输出
/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	int tmp = 0;
	//调整
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}


	//输出
	printf("%d %d %d\n", a, b, c);
	return 0;
}
*/

//写一个代码打印1-100之间所有3的倍数
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if(i % 3 == 0)
		{
		printf("%d ", i);
		}
	}
	return 0;
}
*/

//给定两个数，求着两个数的最大公约数
/*
int main()
{
	int a = 0;
	int b = 0;
	//输入
	scanf("%d %d", &a, &b);
	//求最大公约数
	int min = (a < b) ? a : b;
	int m = min;
	while (1)
	{
		if (a % m == 0 && b % m == 0)
		{
			break;
		}
		m--;
	}
	printf("%d\n", m);
	return 0;
}
*/

/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	//输入
	scanf("%d %d", &a, &b);
	//求最大公约数
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
*/

//编写程序数一下1到100的所有整数中出现多少个数字9

/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//判断个位是不是9
		if (i % 10 == 9)
		{
			count++;
		}
		//判断十位是不是9
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count = %d\n", count);

	return 0;
}
*/

//计算1/1-1/2+1/3-1/4+1/5+...+1/99-1/100的值，
//打印出结果
/*
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + flag*(1.0 / i);
		flag = -flag;
	}
	printf("%lf\n", sum);

	return 0;
}
*/

//求10个整数的最大值
/*
int main()
{
	//准备10个整数
	int arr[10] = { 0 };
	//输入数字
	int i= 0;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	//找出最大值
	int max = arr[0];

	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}
*/

//在屏幕上打印乘法口诀
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		//打印一行
		int j = 0;
		for(j=1; j<=i; j++)
		{ 
			printf("%d*%d=%-2d ", i, j, i *j);
		}
		printf("\n");
		
	}
	return 0;
}
*/

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		//打印一行
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);

	return 0;
}