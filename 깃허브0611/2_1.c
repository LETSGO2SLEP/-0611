// int my_strlen �Լ��� �̿��� strlen �Լ��� ���� ����� ��Ÿ������ Ȯ���ض�

#include<stdio.h>
#include<string.h>

int my_strlen(char *src)
{
	int i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	return i;
}

int main(void)
{
	int num = strlen("holiday please");

	printf("src : %d\n", num);
	printf("my_src : %d\n", my_strlen("holiday please"));
	return 0;
}