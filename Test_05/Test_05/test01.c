#define  _CRT_SECURE_NO_WARNINGS
/*
C语言是【结构化】的程序设计语言
*/
#include <stdio.h>

/*
int main()
{
	int age = 10;

	if (age >= 18)
		printf("成年\n");
	else
		printf("未成年\n");

	return 0;
}
*/

/*
int main()
{
	int age = 10;

	if (age < 18)
		printf("青年\n");
	else if (age >= 18 && age < 28)
		printf("中年\n");
	else if (age >= 28 && age < 40)
		printf("壮年\n");
	else if (age >= 40 && age < 60)
		printf("老年\n");
	else  
		printf("晚年\n");

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

	//没有输出结果
	//因为else离得最近if匹配的

	int a = 0;
	int b = 1;
	if (a == 1)
	{ 
		if (b == 1)
			printf("hehe\n");
	}
	else
		printf("haha\n");

	//结果为haha
	return 0;
}
*/

//变量的命名（有意义，规范）
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

//判断一个数是否奇数

/*
int main()
{
	int a = 0;
	scanf("%d", &a);

	//判断
	if (a % 2 == 1)
		printf("奇数\n");
	else
		printf("不是奇数\n");

	return 0;
}
*/

//输出1- 100之间的奇数

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

//switch 打印星期几

/*
 int main()
 {
	 int a = 0;
	 scanf("%d", &a);

	 switch (a)
	 {
	 case 1:
		 printf("星期1\n");
		 break;
	 case 2:
		 printf("星期2\n");
		 break;
	 case 3:
		 printf("星期3\n");
		 break;
	 case 4:
		 printf("星期4\n");
		 break;
	 case 5:
		 printf("星期5\n");
		 break;
	 case 6:
		 printf("星期6\n");
		 break;
	 case 7:
		 printf("星期日\n");
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
		{//允许嵌套使用
		case 1: n++;//不执行
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


//打印1~10数字
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
			continue;//跳过本次循环的代码

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
	//EOF; 返回-1//end of file
	//int ch = getchar(); //getchar 获取字符

	//printf("%c\n", ch); //1
	//putchar(ch); //2

	//return 0;

	
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}

	//举例子
	//假设输入一个密码
	char password[20] = { 0 };
	printf("请输入密码:");
	scanf("%s", &password);

	//getchar();//读取了\n
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("请确认密码(Y/N)");
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
	//只打印数字字符
	return 0;
}
*/

//for循环
/*
for(表达式1; 表达式2; 表达式3 )
	循环语句；

表达式1
表达式1初始化部分，用于出事化循环变量的。

表达式2
表达式2位条件判断部分，用于判断循环时候终止

表达式3
表达式3为调整部分，用于循环条件的调整。
*/
//for循环的判断部分省略以为这判断会恒成立
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
//****1.不可在for循环体内修改循环变量，防止for循环失去控制。
//****2.建议for语句的循环控制变量的取值采用"前闭后开区间"写法。

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

