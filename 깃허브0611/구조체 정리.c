#include<stdio.h>

// 구조체 선언
struct student {
	int number;			// 구조체 멤버
	char name[20];
	double grade;
}; // 마지막에 세이콜론이 있어야 한다.


int struct_main(void)
{
	struct student s1;		// 구조체 변수 선언
	struct student s2, s3;	// 구조체 변수 선언2
	struct student s4 = { 24,"kim",4.3 };	// 구조체 초기화
	s1.grade = 3.8;							// 구조체 멤버 접근
	
	//struct student list[100];		// 구조체 배열 선언. 구조체 100개를 저장할 수 있다.
	//struct student list[3] = {		// 구조체 배열 초기화. 중괄호 안에 또 중괄호가 필요하다.		
	//	{1,"park",3},
	//	{2,"kim",3}
	//};

	//int n = sizeof(list) / sizeof(list[0]);			// 구조체 배열의 원소 개수 자동 저장

	struct student s = { 1,"kim",30 };		// 구조체 선언
	struct student *p;						// 구조체 포인터 선언
	p = &s;									// 구조체의 주소를 포인터에 대입

	printf("학번 = %d, 이름 = %s, 학점 = %d", s.name, s.name, s.grade);			// s 세개 다 구조제 호출
	printf("학번 = %d, 이름 = %s, 학점 = %d", (*p).name, (*p).name, (*p).grade);	// *p.
	printf("학번 = %d, 이름 = %s, 학점 = %d", p->name, p->name, p->grade);		// p->

	// 포인터를 멤보러 가지는 구조체
}