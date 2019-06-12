#include<stdio.h>
#include<ctype.h>

int string_main(void)
{
	printf("strcpy(str, \"world\"); 문자열 변경 함수\n\n");
	char str[10] = "hello!";
	strcpy(str, "world");

	printf("%s\n", str);

	//	int getchar(void) : 하나의 문자를 읽어서 반환한다.
	//	void putchar(int c) : 변수 c에 저장된 문자를 출력한다.
	//	int _getch(void) :  하나의 문자를 읽어서 반환한다.(버퍼를 사용하지 않음)
	//	void _putch(int c) : 변수 c에 저장된 문자를 읽어서 출력한다.(버퍼를 사용하지 않음)
	//	scanf(%c,&c) : 하나의 문자를 읽어서 변수 c에 저장한다.
	//	printf("%c",c) : 변수 c에 저장된 문자를 출력한다.

	//
	//int ch;
	//while ((ch = getchar()) != EOF)  // EOF는 ctrl+z, EOF가 입력될때 까지 (하나 이상의)문자를 입력 받고 출력한다.
	//{
	//	putchar(ch);
	//}

	// 즉각적인 응답을 원할떄는 getch를 사용해야 한다.

	//	int scanf("%s",s) : 문자열을 읽어서 문자배열 s에 저장
	//	int printf("%s",s) : 배열 s에 저장되어 있는 물자열을 출력한다.
	//	char *gets_s(char *s, int size) : 한 줄의 물자열을 읽어서 배열 s에 저장한다.
	// int puts(const char *s) : 배열 s에 저장되어 있는 한 줄의 물자열을 출력한다.

	// 여러 단어로 이루어진 한 줄 전체를 입력받으려면 gets_s()를 사용해야 한다.

	char buf[100];
	gets_s(buf, 100);  // 입력받는다. 한 줄을 여러 단어의
	puts(buf);

	/*
	printf("소문자를 대문자로 바꾸는 프로그램");

	int c;
	while ((c = getchar()) != EOF)
	{
		if (islower(c))
			c = toupper(c);
		putchar(c);
	}
	return 0;

	//	gets_s

	char name[100];
	char address[100];

	printf("이름을 입력하세요 : ");
	gets_s(name, 100);
	printf("주소를 입력하세요 : ");
	gets_s(address, 100);
	*/
	//	strlen(s) : 문자열의 길이를 구한다.
	//	strcpy(s1,s2) : s2을 s1에 복사한다.
	//	strcat(s1,s1) : s2를 s1의 끝에 붙여넣는다.
	//	strcmp(s1,s2) : s1과 s2를 비교한다.  // s1이 s2 보다 앞에 있으면 음수 같으면 양수 s2가 앞에 있으면 양수가 반환된다.

	// 문자열 검색 // strstr

	printf("문자열 검색\n\n");
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joy";

	char *p;
	int loc;
	p = strstr(s, sub); // 문자열이 검색되는 곳의 주소를 저장

	loc = (int)(p - s);  // 부분 문자열의 주소에서 전체 문자열 수조를 빼 계산한다.
	if (p != NULL)  // p 가 발견이 됬으면
		printf("%s 에서 첫번째 %s가 %d에서 발견되었음", s, sub, loc);
	else
		printf("%s가 발견되지 않음",sub);
	

}