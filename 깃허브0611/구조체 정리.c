#include<stdio.h>

// ����ü ����
struct student {
	int number;			// ����ü ���
	char name[20];
	double grade;
}; // �������� �����ݷ��� �־�� �Ѵ�.


int struct_main(void)
{
	struct student s1;		// ����ü ���� ����
	struct student s2, s3;	// ����ü ���� ����2
	struct student s4 = { 24,"kim",4.3 };	// ����ü �ʱ�ȭ
	s1.grade = 3.8;							// ����ü ��� ����
	
	//struct student list[100];		// ����ü �迭 ����. ����ü 100���� ������ �� �ִ�.
	//struct student list[3] = {		// ����ü �迭 �ʱ�ȭ. �߰�ȣ �ȿ� �� �߰�ȣ�� �ʿ��ϴ�.		
	//	{1,"park",3},
	//	{2,"kim",3}
	//};

	//int n = sizeof(list) / sizeof(list[0]);			// ����ü �迭�� ���� ���� �ڵ� ����

	struct student s = { 1,"kim",30 };		// ����ü ����
	struct student *p;						// ����ü ������ ����
	p = &s;									// ����ü�� �ּҸ� �����Ϳ� ����

	printf("�й� = %d, �̸� = %s, ���� = %d", s.name, s.name, s.grade);			// s ���� �� ������ ȣ��
	printf("�й� = %d, �̸� = %s, ���� = %d", (*p).name, (*p).name, (*p).grade);	// *p.
	printf("�й� = %d, �̸� = %s, ���� = %d", p->name, p->name, p->grade);		// p->

	// �����͸� �⺸�� ������ ����ü
}