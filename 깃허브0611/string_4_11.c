#include <stdio.h>
#include <string.h>
#define SIZE 80
void token1(char seps[], char *token);
int main(void)
{
	char a[SIZE] = "";							// a ���ڿ� ����
	char seps[] = " ";							// delimiter ���� seps ����
	char *token;								// token ������ ����	
	char *c;									// c ������ ����
	int i, count;								// i, count ���� ����		
	count = 0;									// count = 0;

	printf("���ڿ��� �Է��ϼ���: ");				// ���ڿ� �Է�
	gets(a);									// ���ڿ� a �迭�� ����

	printf("��¹��ڿ� : ");						// ���ڿ� ���
	token = strtok(a, seps);					// strtok �� ����� a �迭�� ����
	c = token;									// token ���� ����� �迭�� c�� ����
	token1(seps, token);						// token1 �Լ� ȣ��
	printf("%s", c);							// c�� ����� �迭 ȣ��
	printf("\n");								
	return 0;									// main �Լ� ����
}
void token1(char seps[], char *token)			// token1 ����
{
	token = strtok(NULL, seps);					// token strtok NULL���� ���ö� ����sep���� ����
	if (token != NULL)							// token�� NULL ���� �ƴ϶��,
	{
		token1(seps, token);					// token1 �Լ� ȣ��
		printf("%s ", token);					// token ���
	}
}
