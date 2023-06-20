#include <stdio.h>
//关键字typedef 是类型定义，理解为类型重命名。

/*
typedef unsigned int uint;

typedef struct Node
{
	int data;
	struct Node* next;

}Node;

int main()
{
	unsigned int sum = 0;
	uint num2 = 1;
	struct Node n;
	Node n2;
	return 0;
}
*/

//关键字static是用来修饰变量和函数的
//1.修饰局部变量 - 称为静态局部变量
//2.修饰全部变量 - 称为静态全局变量
//3.修饰函数 - 称为静态函数

//1.static 修饰局部变量的时候，局部变量出了作用域，不销毁的。
//本质上，static修饰局部变量的时候，改变了变量的存储位置的。
//影响了变量的生命周期，生命周期变长，和程序的生命周期一样。

//void 是不需要返回所以没有return。
/*
void test()
{

	static int a = 1; //int a = 1;
	a++;
	printf("%d\n", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}
*/

//全局变量

//声明外部符号
//static修饰全局变量的时候
//全局变量的外部链接属性就变成了内部链接属性
//其他源文件（.c）就不能在使用到这个全局变量

/*
extern int g_val;

int mian()
{

	pritnf("%d\n", g_val);
	return 0;
}
*/

//static修饰函数
/*
extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;

	int z = Add(a, b);
	pritnf("%d\n", z);

	return 0;
}
*/

//register - 寄存器
/*
int main()
{
	register int num = 3;//建议：3存放在寄存中
	return 0;
}
*/

//define定义常量和宏
 

/*
//define定义标识符常量
#define NUM 100

#define ADD(x,y) x+y

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	printf("%d\n", NUM);
	int n = NUM;
	printf("%d\n", n);
	int arr[NUM] = { 0 };

	int a = 10; 
	int b = 20;
	int c = ADD(a, b);
	printf("%d\n", c);

	return 0;
}

*/


//指针
/*
int main()
{
	int a = 10;//向内存申请4个字节，存储10
	//&a; //取地址操作符
	printf("%p\n", &a);//十六进制的结果
	int* p = &a; //*代表p是指针变量
	//int说明p指向的对线是int类型的
	//p就是指针变量
	//存放指针(地址)的变量就是指针变量。
	
	*p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象。*P就是p指向的对象
	printf("%d\n", a);

	//char ch = 'w';
	//char* pc = &ch;

	return 0;
}

*/

/*
//指针的大小
int main()
{
	int* p;
	char* p2;
	//不管什么类型的指针，都是在创建指针变量
	//指针变量是用来存放地址的
	//指针变量的大小取决于一个地址存放的时候需大多空间
	//32位机器上的地址：32bit位 - 4 byte,所以指针变量的大小是4个字节
	//64位机器上的地址：64bit位 - 8 byte,所以指针变量的大小是8个字节
	printf("%zd\n", sizeof(char*));//8
	printf("%zd\n", sizeof(short*));// 8
	printf("%zd\n", sizeof(int*));//8
	printf("%zd\n", sizeof(float*));//8
}
*/

//结构体

/*
//学生
struct Stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
	//->
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}

int main()
{
	struct Stu s = { "Li", 20, "nan", "123456789" };
	
	//结构体对象.成员名
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}
*/

/*
define 不是关键字，是预处理值
*/
