#include<stdio.h>

void get_int(int *px, int *py);

int pointer12_main(void)
{
	int x = 0, y = 0;

	get_int(&x, &y);
}

void get_int(int *px, int *py)
{
	printf("�ΰ��� ������ �Է��ϼ���(�� : 10 20) : ");
	scanf("%d %d", px, py);
	printf("������ ���� : %d\n", *px + *py);
}