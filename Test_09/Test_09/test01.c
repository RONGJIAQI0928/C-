#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//数组
/*
int main()
{
	//数组。一组相同类型元素的集合

	int arr[10];
	char ch[5];
	double data1[20];
	double data2[15 + 5];

	int n = 10;
	//int arr2[n];//这种数组是不能初始化的
	//c99标椎之前，数组的大小必须是常量或者常量表达式
	//c99之后，数组的大小可以是变量，为了支持变长数组

	return 0;
}
*/

/*
int main()
{
	//不完全初始化，剩余的元素默认初始化为0
	int arr[10] = { 1,2,3 };

	char ch1[10] = { 'a', 'b', 'c' };
	//a b c 0 0 0 0 0
	char ch2[10] = "abc";
	//a b c \0 0 0 0

	return 0;
}
*/

/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//[] - 下标引用操作符

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//打印数组的每个元素的地址
	for(i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}

	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	for (i = sz - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/

//二维数组

//1 2 3 4
//2 3 4 5
//3 4 5 6

/*
int main()
{
	int arr1[3][4] = { {1,2},{3,4},{5,6,7} };
	char carr2[5][6];
	return 0;
}
*/

/*
int main()
{
	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	int i = 0;
	printf("%d ", arr[2][1]);
	
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

//冒泡函数
//核心思想：两个相邻的元素进行比较

//1.数组
//2.指针

/*
//形参是数组的形式
void bubble_sort(int arr[],int sz)
{
	//趟数
	int i = 0;

	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j <sz-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//数组
	//把数组的数据排成升序
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };

	int sz = sizeof(arr) / sizeof(arr[0]);

	//冒泡排序的算法，对数组进行排序
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/

//数组名是什么？
//数组名确实能表示首元素的地址
//但是有2个例外：
//1.sizeof(数组名),这里的数组表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名,这里的数组名表示整个数组，取出的是整个数组的地址
//

/*
int main()
{
	int arr[10] = {0};
	printf("%p\n", arr);//arr就是首元素的地址
	printf("%p\n", arr+1);
	printf("-----------------------\n");
	printf("%p\n", &arr[0]);//首元素的地址
	printf("%p\n", &arr[0]+1);
	printf("-----------------------\n");
	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr+1);

	int n = sizeof(arr);//40
	printf("%d\n", n);

	return 0;
}
*/

//二维数组的数组名的理解
/*
int main()
{
	int arr[3][4] = {0};

	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

	int sz = sizeof(arr);
	printf("%d\n", sz);

	printf("%p\n", arr);//二维数组的数组名也表示数组首元素的地址

	return 0;
}
*/

/*
利用数组
实现三字棋

test.c//测试游戏的逻辑
game.c//游戏代码的实现
game.h//游戏代码的声明(函数声明,符号定义)
*/