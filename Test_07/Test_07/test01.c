#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//goto语句
/*
int main()
{
again:
	printf("hehe\n");
	printf("haha\n");
	goto again;
	return 0;
}
*/

//关机程序
//1.电脑运行起来后，1分钟内关机
//2.如果输入：我是猪，就取消关机

/*
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在60s内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
*/

//函数
/*1.库函数
  2.自定义函数

*/

/*
int main()
{
	//char arr1[20] = { 0 };
	//char arr2[] = "hello";

	//strcpy(arr1, arr2);

	//printf("%s\n", arr1);

	char arr[20] = "hello world";
	memset(arr, 'x', 5);
	printf("%s\n", arr);

	return 0;
}
*/

/*
int get_max(int x ,int y)
{
	return(x > y ? x : y);
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//求较大值
	int m = get_max(a, b);
	printf("%d\n", m);

	return 0;
}
*/

//写个函数可以交换两个整形变量的内容
//形式参数

/*
void Swap(int* px, int* py)
{
	//int z = 0;
	//z = x;
	//x = y;
	//y = z;
	int z = *px;//z = a
	*px = *py;//a = b
	*py = z;//b = a

}
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//交换
	printf("交换前:a=%d, b =%d", a, b);

	//a和b实参
	//传值调用
	//Swap(a, b);

	//传址调用
	Swap(&a, &b);
	printf("交换后:a=%d, b =%d", a, b);

	return 0;
}
*/

//写个函数判断一个数是不是素数
// 
//打印100~200之间的素数
//素数是只能被1和他本身整除的数
//7

//第一个版本
/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//是素数就打印
		//拿2~i-1之间的数字去试除i
		int flag = 1;//flag是1，表示是素数
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d\n", i);
		}

	}
	printf("count = %d\n", count);
	return 0;
}
*/

//第二个版本
#include <math.h>
//sqrt是数学库函数
//开平方
//math.h
/*
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		//判断i是否为素数
		//是素数就打印
		//拿2~i-1之间的数字去试除i
		if (is_prime(i))
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}
*/

//写一个函数判断一年是不是闰年
// 
//打印1000~2000年的闰年
/*
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是不是闰年
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d ", year);
			}
		}
		if(year % 400 == 0)
		{
			printf("%d ", year);
		}
		//if(((year % 4 == 0)&&(year % 100 != 0)) || (year % 400 == 0))
		//{
		//    printf("%d", year);
		//}
	}
	return 0;
}
*/

//是闰年返回1
//不是闰年返回0
/*
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是不是闰年
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
		
	}
	return 0;
}
*/

//写个函数，实现一个整形有序数组的二分查找
/*
int binary_search(int arr[], int k ,int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//找到了返回下标
		}
	}

	return -1; // 找不到
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//找到了，返回下标
	//找不到，返回-1

	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是:%d", ret);
	}
	return 0;
}
*/
//形式参数和实际参数


//布尔类型

#include <stdbool.h>
/*
bool is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			print("%d ", i);
		}
	}
	return 0;
}
*/

//写一个函数，每调用一次这个函数，就会将num的只增加1.
/*
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	
	return 0;
}
*/

//链式访问
/*
int main()
{
	//int len = strlen("abcdef");
	//printf("%d\n", len);

	////链式访问
	//printf("%d\n", strlen("abcdef"));

	printf("%d", printf("%d", printf("%d", 43))); 
	//结果为4321

	return 0;
}
*/

//函数不写返回值的时候，默认返回类型是int

/*
明确说明，main函数不需要参数
本质上main函数是有参数的
main函数有3个参数
int main(int argc, char* argv[], char *envp[])
{
	retrun 0;
}
*/