#define  _CRT_SECURE_NO_WARNINGS
/*
C�����ǡ��ṹ�����ĳ����������
*/
#include <stdio.h>

/*
int main()
{
	int age = 10;

	if (age >= 18)
		printf("����\n");
	else
		printf("δ����\n");

	return 0;
}
*/

/*
int main()
{
	int age = 10;

	if (age < 18)
		printf("����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 40)
		printf("׳��\n");
	else if (age >= 40 && age < 60)
		printf("����\n");
	else  
		printf("����\n");

	return 0;
}
*/

/*
int main()
{
	int a = 0;
	int b = 1;

	//if (a == 1)
		//if (b == 1)
			//printf("hehe\n");
	//else
		//printf("haha\n");

	//û��������
	//��Ϊelse������ifƥ���

	int a = 0;
	int b = 1;
	if (a == 1)
	{ 
		if (b == 1)
			printf("hehe\n");
	}
	else
		printf("haha\n");

	//���Ϊhaha
	return 0;
}
*/

//�����������������壬�淶��
/*
int main()
{
	char first_name[20] = { 0 };

	return 0;
}
*/
/*
int main()
{
	int num = 3;
	if (5 == num) //if(num == 5 )
		printf("hehe\n");

	return 0;
}
*/

//�ж�һ�����Ƿ�����

/*
int main()
{
	int a = 0;
	scanf("%d", &a);

	//�ж�
	if (a % 2 == 1)
		printf("����\n");
	else
		printf("��������\n");

	return 0;
}
*/

//���1- 100֮�������

/*
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("i = %d\n", i);
		i++;
	}
	return 0;
	
}
*/

/*
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		printf("i=%d\n", i);
	}
	return 0;
}
*/

//switch ��ӡ���ڼ�

/*
 int main()
 {
	 int a = 0;
	 scanf("%d", &a);

	 switch (a)
	 {
	 case 1:
		 printf("����1\n");
		 break;
	 case 2:
		 printf("����2\n");
		 break;
	 case 3:
		 printf("����3\n");
		 break;
	 case 4:
		 printf("����4\n");
		 break;
	 case 5:
		 printf("����5\n");
		 break;
	 case 6:
		 printf("����6\n");
		 break;
	 case 7:
		 printf("������\n");
		 break;
	 }

	 return 0;
 }
 */
/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1: m++;//3
	case 2: n++;//2
	case 3:
		switch (n)
		{//����Ƕ��ʹ��
		case 1: n++;//��ִ��
		case 2: m++; n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}

	printf("m = %d, n = %d\n", m, n);
	return 0;
}
*/


//��ӡ1~10����
/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;

		printf("%d\n", i);
		i++;
	}
	return 0;
}
*/

/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;//��������ѭ���Ĵ���

		printf("%d\n", i);
		
	}
	return 0;
}
*/

/*
int main()
{
	//int ch =0 ;
	//while (getchar())
	//EOF; ����-1//end of file
	//int ch = getchar(); //getchar ��ȡ�ַ�

	//printf("%c\n", ch); //1
	//putchar(ch); //2

	//return 0;

	
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}

	//������
	//��������һ������
	char password[20] = { 0 };
	printf("����������:");
	scanf("%s", &password);

	//getchar();//��ȡ��\n
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("��ȷ������(Y/N)");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}
*/

/*
int main()
{
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}
	//ֻ��ӡ�����ַ�
	return 0;
}
*/

//forѭ��
/*
for(���ʽ1; ���ʽ2; ���ʽ3 )
	ѭ����䣻

���ʽ1
���ʽ1��ʼ�����֣����ڳ��»�ѭ�������ġ�

���ʽ2
���ʽ2λ�����жϲ��֣������ж�ѭ��ʱ����ֹ

���ʽ3
���ʽ3Ϊ�������֣�����ѭ�������ĵ�����
*/
//forѭ�����жϲ���ʡ����Ϊ���жϻ�����
/*
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		//if (i == 5)
			//break;
		if (i == 5)
			continue;
		printf("%d ", i);
		//printf("hehe\n");
	}

	return 0;
}
*/
//****1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
//****2.����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ�����"д����

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;

		printf("%d ", i);
		i++;
	} 

	while (i <= 10);

	return 0;
}

