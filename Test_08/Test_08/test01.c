#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//���������Ͷ���
#include "add.h" 
/*
//��������
int Add(int x, int y);

//�����Ķ���
int Add(int x, int y)
{
	return x + y;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	//�ӷ�
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
*/

//�����ݹ�

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//����1234�������1 2 3 4

//%d�Ǵ�ӡ�з��ŵ�������������������
//%u�Ǵ�ӡ�޷��ŵ�����

//����� 4 3 2 1
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
	print(num); //����һ������ֵ���޷���),����˳���ӡ����ÿһλ


	return 0;
}
*/

//��д��������������ʱ���������ַ����ĳ���

//���ַ����ĳ���
#include <string.h>

//int my_strlen(char str[])//��������д���������ʽ

/*
int my_strlen(char* str)//��������д��ָ�����ʽ
{
	int count = 0;//��������ʱ����
	while (*str != '\0')
	{
		count++;
		str++;//����һ���ַ�
	}
	return count;
}
*/

//�ݹ����
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

//�ݹ������

//�����ķ�ʽ
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

//ѭ���ķ���
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

//���n��쳲�������
//쳲���������
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