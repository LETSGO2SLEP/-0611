// 배열 초기화를 이용하여 과일의 이름과 가격을 배열에 저장한 후 키보드로 과일의 이름을 입력받아 
// 해당하는 과일의 가격을 출력하는 프로그램을 작성하시오

#include<stdio.h>
#include<string.h>
#define WORDS 4

int main(void)
{
	char fruits[WORDS][10][10] = {
		{"사과","500"},
		{"포도","800"},
		{"수박","25,000"},
		{"바나나","1,000"}
	};

	char name[10] = {0,};
	printf("과일의 이름을 입력하세요 --> ");
	scanf("%s", name);

	
	for (int i = 0; i < WORDS; i++)
	{
		if (strcmp(name, fruits[i][0]) == 0)
		{
			printf("%s의 가격은 %s원 입니다.", fruits[i][0], fruits[i][1]);
			break;
		}
	}

	return 0;
}