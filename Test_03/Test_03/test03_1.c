#include <stdio.h>

/*
int main()
{
	//int a = 7 / 2;
	//int b = 7 % 2; //取模
	//printf("%d\n", a);
	//printf("%d\n", b);

	// /除号的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
	float a = 7 / 2.0;
	int b = 7 % 2;//取模操作符的两个操作符只能是整数


	printf("%.2f\n", a);
	printf("%d\n", a);

	return 0;
}
*/

/*
c语言中0表示家。非0表示真
//单目操作符 - 只有一个操作数
！逻辑反操作
- 负值
+ 正直
& 取地址
sizeof 操作数的类型长度（以字节为单位）
~ 对一个数的二进制按位取反
-- 前置，后置--
++ 前置，后置++
* 简介访问操作符（解引用操作符）
(类型) 强制类型转换


*/

/*
int main()
{
	//sizeof是操作符，是单目操作符
	// 
	//int a = 10;
	//printf("%d\n", sizeof(a)); //4
	//printf("%d\n", sizeof(int)); //4
	//printf("%d\n", sizeof a); //4
	

	//int arr[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40 计算的是整个数组的大小，单位是字节
	//printf("%d\n", sizeof(arr[0]));//4 
	//printf("%d\n", sizeof(arr) / (arr[0]));//10 - 数组的元素个数 

	//int a = 10;
	//int b = a++; //后置++，先使用，后++
	//// int b = a, a = a+1;
	//printf("%d\n", b);// 10
	//printf("%d\n", a);// 11

	//int b = ++a; //前置++ ，前++， 后使用
	// a = a +1; b =a;
	//printf("%d\n", b);// 11
	//printf("%d\n", a);// 11

	//int a = (int)3.14;
	//printf("%d\n", a);


	//&& 逻辑与 - 并且
	//|| 逻辑或 - 或者
	int a = 10;
	int b = 20;
	if (a && b)
	{
		printf("hehe\n");
	}

	return 0;
}
*/

//条件操作符 
//exp1 ? exp2 : exp3
/*
int main()
{
	int a = 10;
	int b = 20;
	int r = a > b ? a : b;
	printf("%d\n", r);
	return 0;

}
*/

//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果

/*
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	//           c=8      a=28      5
	int d = (c = a - 2, a = b + c, c - 3);
	printf("%d\n", d); //5
	return 0;
}
*/

//关键字-C语言自己本身预先设定好的，不能自己创建。
//变量的命名：
//1.有意义  
//2.名字必须是字母，数字，下划线组成不能有特殊字符，同时不能以数字开头。
// int 2b //err
// int _2b//ok
//3.变量名不能是关键字




















