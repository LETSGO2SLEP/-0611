// void my_strcpy(char *dst, char src) // src ���ڿ��� dst ���ڿ��� �����ϴ� �Լ�

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