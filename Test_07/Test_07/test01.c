#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//goto���
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

//�ػ�����
//1.��������������1�����ڹػ�
//2.������룺��������ȡ���ػ�

/*
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����60s�ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
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

//����
/*1.�⺯��
  2.�Զ��庯��

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
	//��ϴ�ֵ
	int m = get_max(a, b);
	printf("%d\n", m);

	return 0;
}
*/

//д���������Խ����������α���������
//��ʽ����

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
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//����
	printf("����ǰ:a=%d, b =%d", a, b);

	//a��bʵ��
	//��ֵ����
	//Swap(a, b);

	//��ַ����
	Swap(&a, &b);
	printf("������:a=%d, b =%d", a, b);

	return 0;
}
*/

//д�������ж�һ�����ǲ�������
// 
//��ӡ100~200֮�������
//������ֻ�ܱ�1����������������
//7

//��һ���汾
/*
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�������ʹ�ӡ
		//��2~i-1֮�������ȥ�Գ�i
		int flag = 1;//flag��1����ʾ������
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

//�ڶ����汾
#include <math.h>
//sqrt����ѧ�⺯��
//��ƽ��
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
		//�ж�i�Ƿ�Ϊ����
		//�������ʹ�ӡ
		//��2~i-1֮�������ȥ�Գ�i
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

//дһ�������ж�һ���ǲ�������
// 
//��ӡ1000~2000�������
/*
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//�ж�year�ǲ�������
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

//�����귵��1
//�������귵��0
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
		//�ж�year�ǲ�������
		if (is_leap_year(year))
		{
			printf("%d ", year);
		}
		
	}
	return 0;
}
*/

//д��������ʵ��һ��������������Ķ��ֲ���
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
			return mid;//�ҵ��˷����±�
		}
	}

	return -1; // �Ҳ���
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//�ҵ��ˣ������±�
	//�Ҳ���������-1

	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���:%d", ret);
	}
	return 0;
}
*/
//��ʽ������ʵ�ʲ���


//��������

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

//дһ��������ÿ����һ������������ͻὫnum��ֻ����1.
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

//��ʽ����
/*
int main()
{
	//int len = strlen("abcdef");
	//printf("%d\n", len);

	////��ʽ����
	//printf("%d\n", strlen("abcdef"));

	printf("%d", printf("%d", printf("%d", 43))); 
	//���Ϊ4321

	return 0;
}
*/

//������д����ֵ��ʱ��Ĭ�Ϸ���������int

/*
��ȷ˵����main��������Ҫ����
������main�������в�����
main������3������
int main(int argc, char* argv[], char *envp[])
{
	retrun 0;
}
*/