#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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