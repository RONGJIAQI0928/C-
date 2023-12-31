#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//写一个函数返回参数二进制中1的个数

//int count_numof(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//
//		n  /= 2;
//	}
//	return count;
//}

//int count_numof(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> 1) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
/*
int count_numof(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int n = count_numof(num);
	printf("%d\n", n);


	return 0;
}
*/

//判断两个int(32位)整数m和n的二进制表达中，有多少个位(bit)不同？

//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

/*
int count_diff_bit(int m, int n)
{
	int count = 0;
	// ^异或操作符
	//相同为0；相异为1
	int ret = m ^ n;
	//统计一下ret中二进制位有几个1
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int ret = count_diff_bit(m, n);
	printf("%d\n", ret);

	return 0;
}
*/

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//10
/*
int main()
{
	int i = 0;
	int num = 0;
	scanf("%d", &num);

	//获取奇数位的数字
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	//获取偶数位的数字
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	return 0;
}
*/


//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0
//全局变量，不初始化，默认值是随机值
/*
int i;//0
int main()
{
	i--;//-1
	if (i > sizeof(i))
	//sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型的
	{
		printf(">\n");
	}
	if (i < sizeof(i))
	{
		printf("<\n");
	}
	return 0;
}
*/

//多组输入，一个整数（2~20），表示输出的行数，也表示组成"x"的反斜线和正斜线的长度。

/*
int main()
{
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
				{
					printf("*");
				}
				else if (i + j == n - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}

			printf("\n");
		}
	}
	return 0;
}
*/

//输入年份和月份,计算这一年这个月有多少天

int is_leap_year(int y)
{
	return(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;

	int days[13] = { 0,31,28,31,30,31,31,30,31,30,31 };
	//                 1  2  3....
	//0表示假
	//非0表示真
	//逻辑操作符 && || ！ 的结果如果是真就是1，如果是假就是0
	while (scanf("%d %d", &y, &m) == 2)
	{
		int d = days[m];
		if ((is_leap_year(y) == 1) &&(m==2))
		{
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}