#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//����n�Ľ׳�
// 1*2*3*4...*n

/*
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}

	printf("%d\n", ret);
	return 0;
}
*/

//����1��+2��+3������+10��

/*
int main()
{
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		ret = ret * i;
		sum = ret++;
	}
	printf("%d\n", sum);
	return 0;
}
*/

//��һ�����������в��Ҿ����ĳ������n���±�
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	//��һ�����������в��Ҿ����ĳ������n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	for (i = 0; i < sz; i++)
	{
		if(arr[i] == k)
		{
			printf("�ҵ��ˣ��±���:%d\n", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("�Ҳ���\n");
	}
}
*/

//���ֲ���
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	//��һ�����������в��Ҿ����ĳ������n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);

	int left = 0;
	int right =sz -1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
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
			printf("�ҵ���,�±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}

	return 0;
}
*/

//��д���룬��ʾ����ַ��������ƶ������м���
/*
int main()
{
	char arr1[] = "welcome to home!!!";
	char arr2[] = "##################";

	int left = 0;
	int right = strlen(arr2) - 1;//int right = sizeof(arr1��/sizeof(arr[0])-2;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		//�����Ļ
		system("cls"); //system��һ���⺯��,����ִ��ϵͳ����
		left++;
		right--;
	}

	printf("%s\n", arr2);
	return 0;
}
*/

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɹ��������������������˳�����

//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==,��Ӧ��ʹ��һ���⺯��:strcmp
//�������ֵ��0,��ʾ2���ַ������
#include <string.h>
/*
int main()
{
	int i = 0;
	char password[20] = { 0 };
	//�����������ַ���:abcdef
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������������˳�����\n");
	}
	return 0;
}
*/

//��������Ϸ
//���Բ���һ���������1~100��
//�����´���
//������С��
#include <time.h>

void menu()
{
	printf("*****************\n");
	printf("******* 1.play **\n");
	printf("******* 0.exit **\n");
	printf("*****************\n");
}
void game()
{
	int guess = 0;
	// RAND_MAX;//0~RAND_MAX��32767��
	//1.���������
	int ret = rand()%100+1; //����������ĺ���

	//2.������
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);

		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
	

}

//ָ��
//int *p = null;
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();//�����ֵ������߼�
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ�����,����ѡ��\n");
			break;
		}
		
	} while (input);

	return 0;
}