// int my_strlen 함수를 이용해 strlen 함수와 같은 결과를 나타내는지 확인해라

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