#include<stdio.h>
int main(void)
{
	int i;
	char fruits[3][20];

	for (i = 0; i < 3; i++) {
		printf("과일 이름을 입력하시오 : ", fruits[i]);
		scanf("%s", fruits[i]);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d 번째 과일 %s\n", i, fruits[i]);
	}

	return 0;
}