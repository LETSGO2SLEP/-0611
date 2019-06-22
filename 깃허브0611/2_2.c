// void my_strcpy(char *dst, char src) // src 문자열을 dst 문자열에 복사하는 함수

#include<stdio.h>
#include<string.h>
void my_strcpy(char *dst, char *src)
{
	int i = 0;
	while (src[i] != 0)
	{
		dst[i] = src[i-strlen(dst)];
		i++;
	}
}

int main(void)
{
	char dst[100] = { 0, };
	char src[] = "lets go heme";
	my_strcpy(dst, src);

	printf("%s\n", src);
	printf("%s\n", dst);
	
	return 0;
}