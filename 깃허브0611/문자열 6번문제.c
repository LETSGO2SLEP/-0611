#include<stdio.h>\
#include<ctype.h>
#include<string.h>
#define SIZE 100
void str_upper(char *s);

int string6_main(void)
{
	int i = 0;
	char s[SIZE] = { 0, };
	
	printf("문자열을 입력하세요 : ");
	gets_s(s, SIZE);
	
	
	
	printf("변환된 문자열 : ");
	str_upper(&s);
}

void str_upper(char *s)
{
	for (int i = 0; *(s + i) != 0;i++)
	{
		printf("%c", (int)(*(s+i)) - 'a' + 'A');
	}
}