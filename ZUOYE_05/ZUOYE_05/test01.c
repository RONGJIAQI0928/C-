#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//дһ���������ز�����������1�ĸ���

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

//�ж�����int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��

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
	// ^��������
	//��ͬΪ0������Ϊ1
	int ret = m ^ n;
	//ͳ��һ��ret�ж�����λ�м���1
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

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//10
/*
int main()
{
	int i = 0;
	int num = 0;
	scanf("%d", &num);

	//��ȡ����λ������
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");

	//��ȡż��λ������
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	return 0;
}
*/


//ȫ�ֱ�������̬�������Ƿ��ھ�̬��
//ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0
//ȫ�ֱ���������ʼ����Ĭ��ֵ�����ֵ
/*
int i;//0
int main()
{
	i--;//-1
	if (i > sizeof(i))
	//sizeof������������㷵�صĽ����size_t���͵ģ����޷������͵�
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

//�������룬һ��������2~20������ʾ�����������Ҳ��ʾ���"x"�ķ�б�ߺ���б�ߵĳ��ȡ�

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

//������ݺ��·�,������һ��������ж�����

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
	//0��ʾ��
	//��0��ʾ��
	//�߼������� && || �� �Ľ������������1������Ǽپ���0
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