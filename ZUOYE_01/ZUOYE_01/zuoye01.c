#define _CRT_SECURE_NO_WARNINGS
/*
��������
1.���õ�
char
short
int
long
long long
float
double
2.�Զ���
struct ...

*/

#include <stdio.h>


//��ӡС�ɻ�
/*
int main()
{
	printf("     **\n");
	printf("     **\n");
	printf("************\n");
	printf("************\n");
	printf("   *    *   \n");
	printf("   *    *   \n");
	return 0;
}
*/

/*
�ַ����Ľ�����ʾ��\0
0 - ����0
'0' - �ַ�0 - ASCIIֵ��48
'\0' - �ַ�0 - ASCIIֵ��0
EOF - end of file �ļ��Ľ�����־ ֵ��-1 

*/

/*
int main()
{
	int arr[10] = { 1 };
	int n = 10;
	int arr[n];
	//c99��׼֮ǰ������Ĵ�С�����ó������߳������ʽ��ָ��
	int arr2[10] = { 0 }; //ok
	int arr3[3 + 7] = { 1,2,3,4 }; //ok

	//c99��׼֮��֧���˱䳤���飬���ʱ����������Ĵ�С�Ǳ�������������ָ����ʽ�������ǲ��ܳ�ʼ���ġ�
	int m = 100;
	int arr4[m];

	return 0;
}

*/

/*
//vs��c99�ֵ�һЩ�﷨֧�ֲ��Ǻܺã���֧�ֱ䳤�����

int main()
{
	char arr[10] = "hello you";
	return 0;
}
*/

//���������Ľϴ�ֵ
//дһ���������������Ľϴ�ֵ
/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	
	if (a > b)
	{
		printf("%d\n", a);
	}
	else
	{
		printf("%d\n", b);
	}
		
	return 0;
}
*/

/*
int Max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int max = Max(a, b);
	printf("%d\n", max);
}
*/

//��֪һ������y=f(x),��x<0ʱ��y=1; ��x=0ʱ,y=0; ��x > 0ʱ, y =-1.
int main()
{
	//����
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	//����
	if (x > 0)
		y = -1;
	else if (x == 0)
		y = 0;
	else 
		y = 1;
	//���
	printf("%d\n", y);

	return 0;

}