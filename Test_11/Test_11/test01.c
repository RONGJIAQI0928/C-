#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//表达式求值

/*
隐式类型转换


*/
/*
int main()
{
	char a = 5;
	char b = 123;
	char c = a + b;
	printf("%d\n", c);

	return 0;
}
*/

//整形提升的例子:

/*
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	return 0;
}
*/

/*
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(-c));
	return 0;
}
*/