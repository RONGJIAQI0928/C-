#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����n�Ľ׳�
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

//����1��+2��+3������+10��

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

//��һ�����������в��Ҿ����ĳ������n���±�
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	//��һ�����������в��Ҿ����ĳ������n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	for (i = 0; i < sz; i++)
	{
		if(arr[i] == k)
		{
			printf("�ҵ��ˣ��±���:%d\n", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("�Ҳ���\n");
	}
}
*/

//���ֲ���

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	//��һ�����������в��Ҿ����ĳ������n
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
			printf("�ҵ���,�±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}

	return 0;
}