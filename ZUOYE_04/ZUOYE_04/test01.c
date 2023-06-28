#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//走台阶(只能走一个或者2个台阶)
/*
int fib(int n)
{
	if (n <= 2)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}


int main()
{
	int n = 0;

	//输入
	scanf("%d", &n);
	//计算
	int m =fib(n);
	//输出
	printf("%d\n", m);

	return 0;
}
*/

//有一个整数序列，先删除指定的某一个整数，输出删除指定数字之后的序列
//序列中未被删除数字的前后位置没有发生改变

/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n]; //c99
	//接收n个数字
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	//接收剩余的值
	scanf("%d", &del);
	int j = 0; //j作为下标锁定的位置就是用来存放不删除的数据的
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/

//输入N个成绩，换行输出n个成绩中最高分数和最低分数的差
/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	//输入
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//找出最大值
	int max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	//找出最小值
	int min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	printf("%d\n", max - min);
	return 0;
}
*/

//判断是否为大写字母，如果是，将他转换成小写字母，反之则转换为大写字母
/*
int main()
{
	char ch = 0;

	while (scanf("%c", &ch) == 1)
	{

		if (ch >= 'a' && ch <= 'z')
		{
			printf("%c\n", &ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c\n", &ch + 32);
		}
	}

	return 0;
}
*/

//判断输入的字符是不是字母
/*
int main()
{
	char ch = 0;
	while (scanf("%c", &ch) == 1)
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
			printf("%c is an alphabet.\n");
		else
			printf("%c is not an alphabet.\n");
		getchar();
	}
	return 0;
}
*/

