#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ָ��
/*
1.ָ�����ڴ���һ����С��Ԫ�ı�ţ�Ҳ���ǵ�ַ
2.ƽʱ������˵��ָ�룬ͨ��ֵ����ָ���������������ڴ��ַ�ı���

�ܽ᣺ָ����ǵ�ַ��������˵��ָ��ͨ��ָ����ָ�����

ָ����� ��ߴ�ŵ��ǵ�ַ���Ϳ����ҵ�һ���ڴ浥Ԫ

ָ�������������ŵ�ַ�ģ���ַ��Ψһ��ʶһ���ַ�ռ��
ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�.
*/

/*
int main()
{
	int a = 10;//a�����ͱ���,ռ��4���ֽڵ��ڴ�ռ�
	int* pa = &a;//pa��һ��ָ�����,������ŵ�ַ��

	return 0;
}
*/

/*
int main()
{
	char* pc = NULL;
	short* ps = NULL;
	int* pi = NULL;
	double* pd = NULL;

	//sizeof���ص�ֵ���������޷�������,unsigned int 
	printf("%zd\n", sizeof(pc));
	printf("%zd\n", sizeof(ps));
	printf("%zd\n", sizeof(pi));
	printf("%zd\n", sizeof(pd));

	return 0;
}
*/

//ָ�����͵�����
/*
int main()
{
	int a = 0x11223344;
	//0001000100100010
	int* pa = &a;
	char* pc = (char*)&a;//int*
	*pc = 0;

	//����1��
	//ָ�����;�����ָ���ڱ������õ�ʱ����ʼ����ֽ�
	//�����int*��ָ��,�����÷���4���ֽ�
	//�����char*��ָ��,�����÷���1���ֽ�
	//����������������
	return 0;
}
*/

/*
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;

	printf("pa = %p\n", pa);
	printf("pa+1 = %p\n", pa+1);

	printf("pc = %p\n", pc);
	printf("pc+1 = %p\n", pc+1);
	//100 - 10����
	//0x64-16����
	//110 0100 -2����
	//144 - 8����

	//����2��
	//ָ������;�����+-1������ʱ�����������ֽ�
	//������ָ��Ĳ���
	return 0;
}
*/
/*
int main()
{
	int a = 0;

	int* pi = &a;//pi�����÷���4���ֽ�,pi+1Ҳ������4���ֽ�
	float* pf = &a;//pf�����÷���4���ֽ�,pf+1Ҳ������4���ֽ�
	//int* ��float* �ǲ��ǾͿ���ͨ�ã�
	//����
	//*pi = 100;
	*pf = 100.0;
	return 0;
}
*/

//Ұָ��
//Ұָ�����ָ��ָ���λ���ǲ���֪��(�����.����ȷ��.û����ȷ���Ƶ�)
// ��ɣ�
//1.û�г�ʼ��
//2.ָ��Խ��
//3.ָ����ͷ�
// 
//��ι��Ұָ��
// 1.ָ���ʼ��
// 2.С��ָ��Խ��
// 3.ָ��ָ��ռ��ͷż�ʱ��NULL
// 4.���ⷵ�ؾֲ������ĵ�ַ
// 5��ָ��ʹ��֮ǰ�����Ч��
//

/*
int main()
{
	int* p;
	//pû�г�ʼ��,����ζû����ȷ��ָ��
	//һ���ֲ���������ʼ���Ļ����ŵ������ֵ
	//
	*p = 10;//�Ƿ������ڴ��ˣ������p����Ұָ��

	return 0;
}
*/
/*
//2.ָ��Խ��
int main()
{
	int arr[10] = { 0 };
	int* p = arr;//&arr[0]
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		*p = i;
		p++;
	}


	return 0;
}
*/

//3.ָ����ͷ�
/*
int* test()
{
	int a = 10;
	return &a;
}

int main()
{
	int* p = test();
	
	return 0;

}
*/

/*
int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	//NULL->0
	int* p2 = NULL;
	//*p2 = 100;//err
	if (p2 != NULL)
	{
		*p2 = 100;//ok
	}

	return 0;
}
*/

//ָ������

//ָ��+-����
/*
*vp++ 
*vp; 
vp++;

(*vp)++
*vpָ������ݽ���++

*/

/*
#define N_VALUES 5
float values[N_VALUES];
float* vp;
int main()
{
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
	}
}
*/

/*
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�����±��д��
	//for (i = 0; i < sz; i++)
	//{
	//	arr[i] = 1;
	//}

	//int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	*p = 1;
	//	p++;
	//}
	
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		*(p + 1) = 1;
	}

	return 0;
}
*/

//ָ�� - ָ��
/*
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);

	return 0;
}
*/

//1�汾
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//2�汾���ݹ飩

//3�汾(ָ��-ָ��)
/*
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}



int main()
{
	int len = my_strlen("abcdef");
	printf("%d\n", len);

	return 0;

}
*/

//���飺һ����ͬ����Ԫ�صļ���
//ָ���������һ����������ŵ��ǵ�ַ
/*
int main()
{
	int arr[10] = { 0 };
	//arr ����Ԫ�صĵ�ַ
	//&arr[0]
	int* p = arr;
	//ͨ��ָ������������
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	for (i = 0; i < sz; i++)
	{
		printf("%p------%p\n", &arr[i], p + i);
	}
	//for (i = 0; i <= 10; i++)
	//{
	//	printf("%d ", *(p + i));
	//}

	return 0;
}
*/

/*
void test(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);//arr[i]->*(arr+i)
	}
}

int main()
{
	int arr[10] = { 0 };
	test(arr, 10);
	return 0;
}
*/

//����ָ��
//����ָ�����������һ��ָ������ĵ�ַ

/*
int main()
{
	int a = 10;
	int* pa = &a;//pa��һ��ָ�������ͬʱ��һ��һ��ָ�����
	int** ppa = &pa;//ppa��һ������ָ�����

	**ppa = 20;

	//*pa = 20;
	printf("%d\n", a);
	
	return 0;
}
*/

//ָ������
//���ָ����������ָ������

/*
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int arr[10];

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	//parr���Ǵ��ָ�������
	//ָ������
	int* parr[10] = {&a, &b, &c};

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(parr[i]));
	}

	return 0;
}
*/

int main()
{
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,1, 2};
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };

	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}

	return 0;
}