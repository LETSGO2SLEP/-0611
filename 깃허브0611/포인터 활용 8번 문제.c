#include<stdio.h>
#define HIGHT 3
#define WIDTH 3
void array_copy(int src[][WIDTH], int dst[][WIDTH]);

int pointerApp8_main(void)
{
	int array[HIGHT][WIDTH] = {
		{100,30,67},
		{89,50,12},
		{19,60,90},
	};

	int array2[HIGHT][WIDTH] = { 0, };
	array_copy(array, array2);

	// 원본 출력
	for (int i = 0; i < HIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");

	// 복사본 출력
	for (int i = 0; i < HIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			printf("%d ", array2[i][j]);
		}
		printf("\n");
	}
}

void array_copy(int src[HIGHT][WIDTH], int dst[HIGHT][WIDTH])
{
	int *p = src;
	int *q = dst;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			(q+i)[j] = (p+i)[j];
		}
	}
	return 0;
}