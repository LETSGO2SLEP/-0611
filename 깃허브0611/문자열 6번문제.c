#include<stdio.h>\
#include<ctype.h>
#include<string.h>
#define SIZE 100
void str_upper(char *s);

int string6_main(void)
{
	int i = 0;
	char s[SIZE] = { 0, };
	
	printf("���ڿ��� �Է��ϼ��� : ");
	gets_s(s, SIZE);
	
	
	
	printf("��ȯ�� ���ڿ� : ");
	str_upper(&s);
}

void str_upper(char *s)
{
	for (int i = 0; *(s + i) != 0;i++)
	{
		printf("%c", (int)(*(s+i)) - 'a' + 'A');
	}
}