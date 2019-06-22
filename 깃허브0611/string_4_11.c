#include <stdio.h>
#include <string.h>
#define SIZE 80
void token1(char seps[], char *token);
int main(void)
{
	char a[SIZE] = "";							// a 문자열 선언
	char seps[] = " ";							// delimiter 변수 seps 선언
	char *token;								// token 포인터 선언	
	char *c;									// c 포인터 선언
	int i, count;								// i, count 변수 선언		
	count = 0;									// count = 0;

	printf("문자열을 입력하세요: ");				// 문자열 입력
	gets(a);									// 문자열 a 배열에 저장

	printf("출력문자열 : ");						// 문자열 출력
	token = strtok(a, seps);					// strtok 를 사용해 a 배열을 나눔
	c = token;									// token 으로 저장된 배열을 c에 저장
	token1(seps, token);						// token1 함수 호출
	printf("%s", c);							// c에 저장된 배열 호출
	printf("\n");								
	return 0;									// main 함수 종료
}
void token1(char seps[], char *token)			// token1 선언
{
	token = strtok(NULL, seps);					// token strtok NULL값이 나올때 까지sep으로 나눔
	if (token != NULL)							// token이 NULL 값이 아니라면,
	{
		token1(seps, token);					// token1 함수 호출
		printf("%s ", token);					// token 출력
	}
}
