#include<stdio.h>
#include<string.h>

int main(void)
{
	int i = 0;
	char s1[100] = { 0, };
	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(s1, 100);

	char *token;
	char sep[] = " ,\t\n";
	token = strtok(s1, sep);
	while (token != NULL)
	{
		token = strtok(NULL, sep);
		i++;
	}

	printf("�ܾ��� ���� %d �Դϴ�.", i);
	return 0;
}