#define _CRT_SECURE_NO_WARNINGS
//C语言代码中一定要有main函数
//主函数
/*
主函数写法

int  main()
{
	return 0;
}
--------------

int代表整形函数

void main() ---古老的写法，不建议。

std - 标准
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


/*数据类型
* 
* 
char 字符数据类型
short 短整型
int 整型
long 长整型
long long 更长整型
float 单精度浮点数
double 双精度浮点数

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
计算机的单位：
bit 比特位 
byte 字节   1byte = 8 bit
kb   1kb = 1024 byte
mb
gb
tb
pb
*/

//变量和常量的概念
//变量分为：
//全部变量 -  {}外面
//局部变量 -  {}里面
/*
int b = 20;  //全局变量
int main()
{
	int a = 10; // 局部变量
	rutrn 0;
}

*/

//当全局变量和局部变量名字相同的情况下，局部优先。

/*
int b = 20;  //全局变量
int main()
{
	int b = 10; // 局部变量
	rutrn 0 ;
}

*/


/*
int main()
{
	short age = 20; //年龄
	int high = 180; //身高
	double weight = 88.5; //体重

	return 0;
}
*/



//写一个代码计算两个数的和
//scanf 是一个输入函数
//printf 是一个输出函数
//&取地址

/*
int main()
{
	int num1 = 0;//初始化
	int num2 = 0;

	//输入两个数
	scanf("%d %d", &num1, &num2);

	//求和
	int sum = num1 + num2;

	//输出
	printf("%d", sum);



	return 0;
}
*/

//变量的作用域
//1.局部变量
// 变量所在的局部范围
//2.全部变量
// 全局变量的作用域是整个工程
// 
// 
//变量生命周期
//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
//全局变量的生命周期是: 整个程序的生命周期。

//声明来自外部的符号
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