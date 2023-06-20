#define _CRT_SECURE_NO_WARNINGS

//1.字面常量
//2.const修饰的常变量
//3.define定义标识常量


#include<stdio.h>

//int main()
//{
	//30;
	//3.14;
	//'w';//字符
	//"abc";

	//const int a = 10;//在C语言中,const修饰的a,本质是变量，但是不能直接修改，有常量的属性.
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
//枚举常量
enum Color
{
	//枚举常量
	RED,
	GREEN,
	BLUE
};

//性别
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	//三原色
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
	//char 字符类型
	//'a';
	//char ch = 'w';
	//字符串
	//C语言中有没有字符串类型呢？ - 没有
	//"abcdef"
	char arr1[] = "abcdef";
	char arr2[] = {'a','b','c','d','e','f','\0'};//'\0'为结束标志

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	
	int len = strlen("abc"); // 求字符串长度的一个函数，string length
	printf("%d\n", len);

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;

}
*/

//转义字符
// \?
//三字母词  ---现在没有了
//？？)-->]
//？？(-->[

//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型数据
//%zu - 打印sizeof的返回值
//\t - tab空格
//\n - 换行
//\r - 回车
//\ddd - ddd表示1~3个八进制的数字
//\xdd - dd表示2个十六进制数字

/*
int main()
{
	//printf("abc\n");//\n为换行
	//printf("abc0def");//abc0def
	//printf("abc\0def"); //abc
	//printf("%c\n", '\'');
	//printf("abc\\0def"); //abc\0def
	printf("%c\n", '\130'); //表示8进制的：130 ，换成10进制：88
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

//选择语句
/*
int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("要好好学习(1/0)？");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("好offer\n");
	}
	else
	{
		printf("摆地摊\n");
	}

	return 0;
}
*/

//循环语句
//20000行有效代码的积累
/*
int main()
{
	int line = 0;
	printf("加入学习\n");

	while (line < 20000)
	{
		printf("写代码:d\n");
		line++;
	}
	if (line >= 20000)
	{
		printf("有工作\n");
	}
	else
	{
		printf("继续加油\n");

	}
	return 0;
}
*/


//函数
/*
int Add (int x , int y)
{
	//int z = 0;
	//z = x + y;
	//return z;
	//简化上面的代码
	return(x + y);
}

int  main()
{
	int n1 = 0;
	int n2 = 0;
	//输入
	scanf("%d %d", &n1, &n2);
	//求和
	int sum = Add(n1, n2);

	//输出
	printf("%d\n", sum);
	return 0;
}
*/


//数组
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


