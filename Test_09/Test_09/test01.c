#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����
/*
int main()
{
	//���顣һ����ͬ����Ԫ�صļ���

	int arr[10];
	char ch[5];
	double data1[20];
	double data2[15 + 5];

	int n = 10;
	//int arr2[n];//���������ǲ��ܳ�ʼ����
	//c99��׵֮ǰ������Ĵ�С�����ǳ������߳������ʽ
	//c99֮������Ĵ�С�����Ǳ�����Ϊ��֧�ֱ䳤����

	return 0;
}
*/

/*
int main()
{
	//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
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
	//[] - �±����ò�����

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	//��ӡ�����ÿ��Ԫ�صĵ�ַ
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

//��ά����

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

//ð�ݺ���
//����˼�룺�������ڵ�Ԫ�ؽ��бȽ�

//1.����
//2.ָ��

/*
//�β����������ʽ
void bubble_sort(int arr[],int sz)
{
	//����
	int i = 0;

	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j <sz-1-i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//����
	//������������ų�����
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };

	int sz = sizeof(arr) / sizeof(arr[0]);

	//ð��������㷨���������������
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/

//��������ʲô��
//������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
//������2�����⣺
//1.sizeof(������),����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&������,�������������ʾ�������飬ȡ��������������ĵ�ַ
//

/*
int main()
{
	int arr[10] = {0};
	printf("%p\n", arr);//arr������Ԫ�صĵ�ַ
	printf("%p\n", arr+1);
	printf("-----------------------\n");
	printf("%p\n", &arr[0]);//��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]+1);
	printf("-----------------------\n");
	printf("%p\n", &arr);//����ĵ�ַ
	printf("%p\n", &arr+1);

	int n = sizeof(arr);//40
	printf("%d\n", n);

	return 0;
}
*/

//��ά����������������
/*
int main()
{
	int arr[3][4] = {0};

	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));

	int sz = sizeof(arr);
	printf("%d\n", sz);

	printf("%p\n", arr);//��ά�����������Ҳ��ʾ������Ԫ�صĵ�ַ

	return 0;
}
*/

/*
��������
ʵ��������

test.c//������Ϸ���߼�
game.c//��Ϸ�����ʵ��
game.h//��Ϸ���������(��������,���Ŷ���)
*/