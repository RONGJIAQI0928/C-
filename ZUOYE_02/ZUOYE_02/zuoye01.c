#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//д���뽫�����������Ӵ�С���
/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	int tmp = 0;
	//����
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


	//���
	printf("%d %d %d\n", a, b, c);
	return 0;
}
*/

//дһ�������ӡ1-100֮������3�ı���
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

//���������������������������Լ��
/*
int main()
{
	int a = 0;
	int b = 0;
	//����
	scanf("%d %d", &a, &b);
	//�����Լ��
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
	//����
	scanf("%d %d", &a, &b);
	//�����Լ��
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
*/

//��д������һ��1��100�����������г��ֶ��ٸ�����9

/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		//�жϸ�λ�ǲ���9
		if (i % 10 == 9)
		{
			count++;
		}
		//�ж�ʮλ�ǲ���9
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("count = %d\n", count);

	return 0;
}
*/

//����1/1-1/2+1/3-1/4+1/5+...+1/99-1/100��ֵ��
//��ӡ�����
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

//��10�����������ֵ
/*
int main()
{
	//׼��10������
	int arr[10] = { 0 };
	//��������
	int i= 0;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	//�ҳ����ֵ
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

//����Ļ�ϴ�ӡ�˷��ھ�
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		//��ӡһ��
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

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		//��ӡһ��
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