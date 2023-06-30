#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//指针
/*
1.指针是内存中一个最小单元的编号，也就是地址
2.平时口语中说的指针，通常值的是指针变量，用来存放内存地址的变量

总结：指针就是地址，口语中说的指针通常指的是指针变量

指针变量 里边存放得是地址，就可以找到一个内存单元

指针变量是用来存放地址的，地址是唯一标识一块地址空间的
指针的大小在32位平台是4个字节，在64位平台是8个字节.
*/

/*
int main()
{
	int a = 10;//a是整型变量,占用4个字节的内存空间
	int* pa = &a;//pa是一个指针变量,用来存放地址的

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

	//sizeof返回的值得类型是无符号整型,unsigned int 
	printf("%zd\n", sizeof(pc));
	printf("%zd\n", sizeof(ps));
	printf("%zd\n", sizeof(pi));
	printf("%zd\n", sizeof(pd));

	return 0;
}
*/

//指针类型的意义
/*
int main()
{
	int a = 0x11223344;
	//0001000100100010
	int* pa = &a;
	char* pc = (char*)&a;//int*
	*pc = 0;

	//结论1：
	//指针类型决定了指针在被解引用的时候访问几个字节
	//如果是int*的指针,解引用访问4个字节
	//如果是char*的指针,解引用访问1个字节
	//其他类型依次类推
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
	//100 - 10进制
	//0x64-16进制
	//110 0100 -2进制
	//144 - 8进制

	//结论2：
	//指针的类型决定了+-1操作的时候，跳过几个字节
	//决定了指针的步长
	return 0;
}
*/
/*
int main()
{
	int a = 0;

	int* pi = &a;//pi解引用访问4个字节,pi+1也是跳过4个字节
	float* pf = &a;//pf解引用访问4个字节,pf+1也是跳过4个字节
	//int* 和float* 是不是就可以通用？
	//不能
	//*pi = 100;
	*pf = 100.0;
	return 0;
}
*/

//野指针
//野指针就是指针指向的位置是不可知的(随机的.不正确的.没有明确限制的)
// 造成：
//1.没有初始化
//2.指针越界
//3.指针的释放
// 
//如何规避野指针
// 1.指针初始化
// 2.小心指针越界
// 3.指针指向空间释放及时置NULL
// 4.避免返回局部变量的地址
// 5，指针使用之前检查有效性
//

/*
int main()
{
	int* p;
	//p没有初始化,就意味没有明确的指向
	//一个局部变量不初始化的话，放得是随机值
	//
	*p = 10;//非法访问内存了，这里的p就是野指针

	return 0;
}
*/
/*
//2.指针越界
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

//3.指针的释放
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

//指针运算

//指针+-整数
/*
*vp++ 
*vp; 
vp++;

(*vp)++
*vp指向的内容进行++

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
	//数组下表的写法
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

//指针 - 指针
/*
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]);

	return 0;
}
*/

//1版本
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

//2版本（递归）

//3版本(指针-指针)
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

//数组：一组相同类型元素的集合
//指针变量：是一个变量，存放的是地址
/*
int main()
{
	int arr[10] = { 0 };
	//arr 是首元素的地址
	//&arr[0]
	int* p = arr;
	//通过指针来访问数组
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

//二级指针
//二级指针是用来存放一级指针变量的地址

/*
int main()
{
	int a = 10;
	int* pa = &a;//pa是一个指针变量；同时是一个一级指针变量
	int** ppa = &pa;//ppa是一个二级指针变量

	**ppa = 20;

	//*pa = 20;
	printf("%d\n", a);
	
	return 0;
}
*/

//指针数组
//存放指针的数组就是指针数组

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

	//parr就是存放指针的数组
	//指针数组
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