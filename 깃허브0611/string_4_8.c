#include<stdio.h>
#include<string.h>

int main(void)
{
	int i = 0;
	char s1[100] = { 0, };
	printf("문자열을 입력하시오 : ");
	gets_s(s1, 100);

	char *token;
	char sep[] = " ,\t\n";
	token = strtok(s1, sep);
	while (token != NULL)
	{
		token = strtok(NULL, sep);
		i++;
	}

	printf("단어의 수는 %d 입니다.", i);
	return 0;
}