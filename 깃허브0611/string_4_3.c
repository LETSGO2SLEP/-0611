#include<stdio.h>
int str_chr(char *s, int c)
{
	int num = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if ((int)s[i] == c)
		{
			num++;
		}
	}
	return num;
}

int main(void)
{
	char src[100] = { 0, };
	printf("문자열을 입력하시오 : ");
	gets_s(src, 100);
	rewind(stdin);

	char c = 0;
	printf("개수를 셀 문자를 입력하시오 : ");
	scanf("%c", &c);
	rewind(stdin);

	printf("%c의 갯수 : %d\n",c, str_chr(src, (int)c));
	return 0;
}