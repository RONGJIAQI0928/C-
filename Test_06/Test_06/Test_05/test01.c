#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//计算n的阶乘
// 1*2*3*4...*n

/*
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}

	printf("%d\n", ret);
	return 0;
}
*/

//计算1！+2！+3！。。+10！

/*
int main()
{
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		ret = ret * i;
		sum = ret++;
	}
	printf("%d\n", sum);
	return 0;
}
*/

//在一个有序数组中查找具体的某个数字n的下标
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	//在一个有序数组中查找具体的某个数字n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	for (i = 0; i < sz; i++)
	{
		if(arr[i] == k)
		{
			printf("找到了，下标是:%d\n", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("找不到\n");
	}
}
*/

//二分查找
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	//在一个有序数组中查找具体的某个数字n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);

	int left = 0;
	int right =sz -1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
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
			printf("找到了,下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}

	return 0;
}
*/

//编写代码，演示多个字符从两段移动，向中间汇聚
/*
int main()
{
	char arr1[] = "welcome to home!!!";
	char arr2[] = "##################";

	int left = 0;
	int right = strlen(arr2) - 1;//int right = sizeof(arr1）/sizeof(arr[0])-2;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		//清空屏幕
		system("cls"); //system是一个库函数,可以执行系统命令
		left++;
		right--;
	}

	printf("%s\n", arr2);
	return 0;
}
*/

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成功，如果三次输入错误，则退出程序

//比较2个字符串是否相等，不能使用==,而应该使用一个库函数:strcmp
//如果返回值是0,表示2个字符串相等
#include <string.h>
/*
int main()
{
	int i = 0;
	char password[20] = { 0 };
	//假设密码是字符串:abcdef
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均输入错误，退出程序\n");
	}
	return 0;
}
*/

//猜数字游戏
//电脑产生一个随机数（1~100）
//反馈猜大了
//反馈猜小了
#include <time.h>

void menu()
{
	printf("*****************\n");
	printf("******* 1.play **\n");
	printf("******* 0.exit **\n");
	printf("*****************\n");
}
void game()
{
	int guess = 0;
	// RAND_MAX;//0~RAND_MAX（32767）
	//1.生成随机数
	int ret = rand()%100+1; //生成随机数的函数

	//2.猜数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);

		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
	

}

//指针
//int *p = null;
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();//猜数字的整个逻辑
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("选择错误,重新选择！\n");
			break;
		}
		
	} while (input);

	return 0;
}