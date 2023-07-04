#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//结构体

//结构体的声明
//结构是一些值得结合，这些值称为成员变量，结构的每个成员可以是不同类型的变量

//结构是一种集合
//数组一组相同类型元素的集合

//人
//声明的结构体类型struct Peo


/*
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p2, p3;//p1和p2是两个全局的结构体变量

struct St
{
	struct Peo p;
	int num;
	float f;

};

//结构体传参
//首选print2函数
//原因
//函数传参的时候,参数是需要压栈的。
//如果传递的一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
//结构体传参的时候，要传结构体的地址

void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体指针->成员变量
}

void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量,成员变量
}

int main()
{
	struct Peo p1 = { "李陈悦", "12345678901", "男", 150};//结构体变量的创建
	struct St s = { {"list", "12345678901", "女", 160}, 100, 3.12f };

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex,  p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num, s.f);

	print2(&p1);
	print1(p1);

	return 0;
}
*/


//结构体的成员可以是标量.数组，指针，甚至其他结构体

/*
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
};

struct MyStruct
{
	struct Peo p;

};
*/

//结构体传参

