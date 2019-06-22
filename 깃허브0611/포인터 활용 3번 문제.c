#include<stdio.h>
int sum_1(int s[4][3], int row);
int sum_2(int(*p)[3]);

int pointerApp3_main(void)
{
	int score[4][3] = {
		{85,90,93},
		{75,87,80},
		{90,75,65},
		{88,95,84},
	};

	for (int i = 0; i < 4; i++)
	{
		printf("รัมก :%d",sum_1(score, i));
		printf("\n");
	}

	for (int i = 0; i < 4; i++)
	{
		printf("รัมก :%d", sum_2(score+i));
		printf("\n");
	}
}

int sum_1(int s[4][3], int row)
{
	int total = 0;
	for (int i = 0; i < 3; i++)
	{
		total += s[row][i];
	}
	return total;
}

int sum_2(int(*p)[3])
{
	int total = 0;
	for (int i = 0; i < 3; i++)
	{
		total += (*p)[i];
	}
	return total;
}