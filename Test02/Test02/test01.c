#define _CRT_SECURE_NO_WARNINGS

//1.���泣��
//2.const���εĳ�����
//3.define�����ʶ����


#include<stdio.h>

//int main()
//{
	//30;
	//3.14;
	//'w';//�ַ�
	//"abc";

	//const int a = 10;//��C������,const���ε�a,�����Ǳ��������ǲ���ֱ���޸ģ��г���������.
	//a = 20;
	//printf("%d\n", a); //20

	//const int n = 10;
	//int  arr[10] = {0};

	//return 0;
//}

/*
#define MAX 100
#define STR "abcdef"
int main()
{
	printf("%d\n", MAX);
	int a = MAX;
	printf("%d\n", a);
	printf("%s\n", STR);
	return 0;
}
*/

/*
//ö�ٳ���
enum Color
{
	//ö�ٳ���
	RED,
	GREEN,
	BLUE
};

//�Ա�
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	//��ԭɫ
	//red green blue
	int num = 10;
	enum Color c = RED;
	return 0;
}

*/

/*
int main()
{
	//qwe
	//char �ַ�����
	//'a';
	//char ch = 'w';
	//�ַ���
	//C��������û���ַ��������أ� - û��
	//"abcdef"
	char arr1[] = "abcdef";
	char arr2[] = {'a','b','c','d','e','f','\0'};//'\0'Ϊ������־

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	
	int len = strlen("abc"); // ���ַ������ȵ�һ��������string length
	printf("%d\n", len);

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;

}
*/

//ת���ַ�
// \?
//����ĸ��  ---����û����
//����)-->]
//����(-->[

//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat���͵�����
//%lf - ��ӡdouble��������
//%zu - ��ӡsizeof�ķ���ֵ
//\t - tab�ո�
//\n - ����
//\r - �س�
//\ddd - ddd��ʾ1~3���˽��Ƶ�����
//\xdd - dd��ʾ2��ʮ����������

/*
int main()
{
	//printf("abc\n");//\nΪ����
	//printf("abc0def");//abc0def
	//printf("abc\0def"); //abc
	//printf("%c\n", '\'');
	//printf("abc\\0def"); //abc\0def
	printf("%c\n", '\130'); //��ʾ8���Ƶģ�130 ������10���ƣ�88
	printf("%c\n", '\x60');

	return 0;

}
*/

/*
int main()
{
	printf("%d\n", strlen("qwer t")); //6
	return 0;
}
*/

//ѡ�����
/*
int main()
{
	int input = 0;
	printf("�������\n");
	printf("Ҫ�ú�ѧϰ(1/0)��");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("��offer\n");
	}
	else
	{
		printf("�ڵ�̯\n");
	}

	return 0;
}
*/

//ѭ�����
//20000����Ч����Ļ���
/*
int main()
{
	int line = 0;
	printf("����ѧϰ\n");

	while (line < 20000)
	{
		printf("д����:d\n");
		line++;
	}
	if (line >= 20000)
	{
		printf("�й���\n");
	}
	else
	{
		printf("��������\n");

	}
	return 0;
}
*/


//����
/*
int Add (int x , int y)
{
	//int z = 0;
	//z = x + y;
	//return z;
	//������Ĵ���
	return(x + y);
}

int  main()
{
	int n1 = 0;
	int n2 = 0;
	//����
	scanf("%d %d", &n1, &n2);
	//���
	int sum = Add(n1, n2);

	//���
	printf("%d\n", sum);
	return 0;
}
*/


//����
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//printf("%d\n", arr[8]);
	int  i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;

}


