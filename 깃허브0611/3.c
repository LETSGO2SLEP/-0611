// �迭 �ʱ�ȭ�� �̿��Ͽ� ������ �̸��� ������ �迭�� ������ �� Ű����� ������ �̸��� �Է¹޾� 
// �ش��ϴ� ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�

#include<stdio.h>
#include<string.h>
#define WORDS 4

int main(void)
{
	char fruits[WORDS][10][10] = {
		{"���","500"},
		{"����","800"},
		{"����","25,000"},
		{"�ٳ���","1,000"}
	};

	char name[10] = {0,};
	printf("������ �̸��� �Է��ϼ��� --> ");
	scanf("%s", name);

	
	for (int i = 0; i < WORDS; i++)
	{
		if (strcmp(name, fruits[i][0]) == 0)
		{
			printf("%s�� ������ %s�� �Դϴ�.", fruits[i][0], fruits[i][1]);
			break;
		}
	}

	return 0;
}