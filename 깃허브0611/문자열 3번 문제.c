#include<stdio.h>
#define SIZE 4

int fruits_main(void)
{
	char fruits[SIZE][2][20] = {
		{"���","500"},
		{"����","25000"},
		{"����","800"},
		{"�ٳ���","500"},
	};

	int i = 0;
	char name[20];
	printf("������ �̸��� �Է��ϼ��� : ");
	scanf("%s", name);
	for (i = 0; i < SIZE ; i++)
	{
		fruits[i] == name;
		printf("%s�� ������ %s �Դϴ�.", name, fruits[i][1]);
		break;
	}

	return 0;
}