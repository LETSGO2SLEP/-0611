#include<stdio.h>
#include<string.h>

int main(void)
{
	char c = 0;

	while (c != '.')
	{
		printf("문자를 입력하시오 : ");
		c = getchar();
		rewind(stdin);
		
		if (c <= 'z' && c >= 'a')
		{
			c -= 'a' - 'A';
			putchar(c);
			printf("\n");
		}
		else if (c <= 'Z' && c >= 'A')
		{
			c += 'a' - 'A';
			putchar(c);
			printf("\n");
		}
		else if (c == '.')
		{
			return 0;
		}
		else {
			printf("잘못 입력했습니다.\n");
		}
		
	}
	

	


}