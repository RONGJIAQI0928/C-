#include <stdio.h>
//�ؼ���typedef �����Ͷ��壬���Ϊ������������

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

//�ؼ���static���������α����ͺ�����
//1.���ξֲ����� - ��Ϊ��̬�ֲ�����
//2.����ȫ������ - ��Ϊ��̬ȫ�ֱ���
//3.���κ��� - ��Ϊ��̬����

//1.static ���ξֲ�������ʱ�򣬾ֲ��������������򣬲����ٵġ�
//�����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�õġ�
//Ӱ���˱������������ڣ��������ڱ䳤���ͳ������������һ����

//void �ǲ���Ҫ��������û��return��
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

//ȫ�ֱ���

//�����ⲿ����
//static����ȫ�ֱ�����ʱ��
//ȫ�ֱ������ⲿ�������Ծͱ�����ڲ���������
//����Դ�ļ���.c���Ͳ�����ʹ�õ����ȫ�ֱ���

/*
extern int g_val;

int mian()
{

	pritnf("%d\n", g_val);
	return 0;
}
*/

//static���κ���
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

//register - �Ĵ���
/*
int main()
{
	register int num = 3;//���飺3����ڼĴ���
	return 0;
}
*/

//define���峣���ͺ�
 

/*
//define�����ʶ������
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


//ָ��
/*
int main()
{
	int a = 10;//���ڴ�����4���ֽڣ��洢10
	//&a; //ȡ��ַ������
	printf("%p\n", &a);//ʮ�����ƵĽ��
	int* p = &a; //*����p��ָ�����
	//int˵��pָ��Ķ�����int���͵�
	//p����ָ�����
	//���ָ��(��ַ)�ı�������ָ�������
	
	*p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*P����pָ��Ķ���
	printf("%d\n", a);

	//char ch = 'w';
	//char* pc = &ch;

	return 0;
}

*/

/*
//ָ��Ĵ�С
int main()
{
	int* p;
	char* p2;
	//����ʲô���͵�ָ�룬�����ڴ���ָ�����
	//ָ�������������ŵ�ַ��
	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ������ռ�
	//32λ�����ϵĵ�ַ��32bitλ - 4 byte,����ָ������Ĵ�С��4���ֽ�
	//64λ�����ϵĵ�ַ��64bitλ - 8 byte,����ָ������Ĵ�С��8���ֽ�
	printf("%zd\n", sizeof(char*));//8
	printf("%zd\n", sizeof(short*));// 8
	printf("%zd\n", sizeof(int*));//8
	printf("%zd\n", sizeof(float*));//8
}
*/

//�ṹ��

/*
//ѧ��
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
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
}

int main()
{
	struct Stu s = { "Li", 20, "nan", "123456789" };
	
	//�ṹ�����.��Ա��
	//printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}
*/

/*
define ���ǹؼ��֣���Ԥ����ֵ
*/
