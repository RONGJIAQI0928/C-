#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//�ṹ��

//�ṹ�������
//�ṹ��һЩֵ�ý�ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���

//�ṹ��һ�ּ���
//����һ����ͬ����Ԫ�صļ���

//��
//�����Ľṹ������struct Peo


/*
struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
}p2, p3;//p1��p2������ȫ�ֵĽṹ�����

struct St
{
	struct Peo p;
	int num;
	float f;

};

//�ṹ�崫��
//��ѡprint2����
//ԭ��
//�������ε�ʱ��,��������Ҫѹջ�ġ�
//������ݵ�һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ

void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//�ṹ��ָ��->��Ա����
}

void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//�ṹ�����,��Ա����
}

int main()
{
	struct Peo p1 = { "�����", "12345678901", "��", 150};//�ṹ������Ĵ���
	struct St s = { {"list", "12345678901", "Ů", 160}, 100, 3.12f };

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex,  p1.high);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num, s.f);

	print2(&p1);
	print1(p1);

	return 0;
}
*/


//�ṹ��ĳ�Ա�����Ǳ���.���飬ָ�룬���������ṹ��

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

//�ṹ�崫��

