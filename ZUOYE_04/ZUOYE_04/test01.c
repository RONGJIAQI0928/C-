#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//��̨��(ֻ����һ������2��̨��)
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

	//����
	scanf("%d", &n);
	//����
	int m =fib(n);
	//���
	printf("%d\n", m);

	return 0;
}
*/

//��һ���������У���ɾ��ָ����ĳһ�����������ɾ��ָ������֮�������
//������δ��ɾ�����ֵ�ǰ��λ��û�з����ı�

/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n]; //c99
	//����n������
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	//����ʣ���ֵ
	scanf("%d", &del);
	int j = 0; //j��Ϊ�±�������λ�þ���������Ų�ɾ�������ݵ�
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

//����N���ɼ����������n���ɼ�����߷�������ͷ����Ĳ�
/*
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[n];
	int i = 0;
	//����
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//�ҳ����ֵ
	int max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	//�ҳ���Сֵ
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

//�ж��Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ
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

//�ж�������ַ��ǲ�����ĸ
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

