// void my_strcat(char *dst,char *src) 

#include<stdio.h>
#include<string.h>

void my_strcat(char *dst, char *src)
{
	int i = 0;
	int num = strlen(dst);

	while (src[i] != 0)
	{
		dst[i+num] = src[i];
		i++;
	}
}

int main(void)
{
	char dst[100] = "hello";
	char src[100] = " i am fine!";
	my_strcat(dst, src);

	printf("%s\n",dst);
	return 0;
}