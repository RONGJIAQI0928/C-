#define _CRT_SECURE_NO_WARNINGS
//C���Դ�����һ��Ҫ��main����
//������
/*
������д��

int  main()
{
	return 0;
}
--------------

int�������κ���

void main() ---���ϵ�д���������顣

std - ��׼
i - input
o - output
*/
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}


/*��������
* 
* 
char �ַ���������
short ������
int ����
long ������
long long ��������
float �����ȸ�����
double ˫���ȸ�����

*/

/*
int main()
{
	printf("%zd\n", sizeof(char));       1
	printf("%zd\n", sizeof(short));      2
	printf("%zd\n", sizeof(int));        4
	printf("%zd\n", sizeof(long));       4
	printf("%zd\n", sizeof(long long));  8
	printf("%zd\n", sizeof(float));      4
	printf("%zd\n", sizeof(double));     8

	return 0;
}
*/


/*
������ĵ�λ��
bit ����λ 
byte �ֽ�   1byte = 8 bit
kb   1kb = 1024 byte
mb
gb
tb
pb
*/

//�����ͳ����ĸ���
//������Ϊ��
//ȫ������ -  {}����
//�ֲ����� -  {}����
/*
int b = 20;  //ȫ�ֱ���
int main()
{
	int a = 10; // �ֲ�����
	rutrn 0;
}

*/

//��ȫ�ֱ����;ֲ�����������ͬ������£��ֲ����ȡ�

/*
int b = 20;  //ȫ�ֱ���
int main()
{
	int b = 10; // �ֲ�����
	rutrn 0 ;
}

*/


/*
int main()
{
	short age = 20; //����
	int high = 180; //���
	double weight = 88.5; //����

	return 0;
}
*/



//дһ����������������ĺ�
//scanf ��һ�����뺯��
//printf ��һ���������
//&ȡ��ַ

/*
int main()
{
	int num1 = 0;//��ʼ��
	int num2 = 0;

	//����������
	scanf("%d %d", &num1, &num2);

	//���
	int sum = num1 + num2;

	//���
	printf("%d", sum);



	return 0;
}
*/

//������������
//1.�ֲ�����
// �������ڵľֲ���Χ
//2.ȫ������
// ȫ�ֱ���������������������
// 
// 
//������������
//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ�����
//ȫ�ֱ���������������: ����������������ڡ�

//���������ⲿ�ķ���
extern int a;

void test()
{
	printf("test--->%d\n", a);
}

int main()
{
	test();
	{
		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);

	return 0;
}