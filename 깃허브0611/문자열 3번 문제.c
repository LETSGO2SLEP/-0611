#include<stdio.h>
#define SIZE 4

int fruits_main(void)
{
	char fruits[SIZE][2][20] = {
		{"사과","500"},
		{"수박","25000"},
		{"포도","800"},
		{"바나나","500"},
	};

	int i = 0;
	char name[20];
	printf("과일의 이름을 입력하세요 : ");
	scanf("%s", name);
	for (i = 0; i < SIZE ; i++)
	{
		fruits[i] == name;
		printf("%s의 가격은 %s 입니다.", name, fruits[i][1]);
		break;
	}

	return 0;
}