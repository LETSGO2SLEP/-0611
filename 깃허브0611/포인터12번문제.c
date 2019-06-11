#include<stdio.h>

void get_int(int *px, int *py);

int pointer12_main(void)
{
	int x = 0, y = 0;

	get_int(&x, &y);
}

void get_int(int *px, int *py)
{
	printf("두개의 정수를 입력하세요(예 : 10 20) : ");
	scanf("%d %d", px, py);
	printf("정수의 합은 : %d\n", *px + *py);
}