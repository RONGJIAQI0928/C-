#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//字符串逆序(递归实现)

/*
int my_stelen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
*/

/*
void reverse(char* str)
{
	char  tmp = *str;
	int len = strlen(str);
	*(str + len - 1) = '\0';
	if(strlen(str + 1)>=2)
		reverse(str+1);
	*(str + len - 1) = tmp;
}
*/

/*
void reverse(char arr[], int left, int right)
{
	char tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	if(left<right)
		reverse(arr, left + 1, right - 1);
}
*/

/*
void reverse(char arr[])
{
	int left = 0;
	//int right = sz -2;
	int right = strlen(arr) - 1;

	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}
}
*/
/*
int main()
{
	char arr[] = "abcdef";
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = my_strlen(arr) - 1;

	reverse(arr, left, right);

	printf("%s\n", arr);

	return 0;
}
*/

//计算一个数的每位之和(递归实现)
/*
int DigitSum(unsigned int n)
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}

int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);

	return 0;
}
*/

//编写一个函数实现n的k次方，使用递归实现

//Pow(n, k) -> n*Pow(n, k-1)
//k=0, 1
// k>0, Pow(n, k) -> n*Pow(n, k-1)
// k<0, 1/(Pow(n, -k))
//
/*
double Pow(int n, int k)
{
	if (k > 0)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(n, -k);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int ret = Pow(n, k);

	printf("%d\n", ret);
	return 0;
}
*/

//sizeof
//sizeof是一个操作符
// 是用来计算变量(类型)所占内存空间的大小，不关注内存中存放的具体内容
// 单位是字节
// 
// strlen
// strlen是一个库函数,是专门求字符串长度的,只能针对字符串
// 从参数给定的地址向后一直找\0,直到统计\0之前出现的字符的个数
//

/*
int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));

	return 0;
}
*/

//创建一个整形数组，完成对数组操作
//实现函数init()初始化数组为全0
//实现print()打印数组的每个元素
// 实现reverse()函数完成数组元素的逆置

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}
