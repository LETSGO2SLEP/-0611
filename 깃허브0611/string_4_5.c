#include<stdio.h>
#include<string.h>

int main(void)
{
	char c = 0;

	while (c != '.')
	{
		printf("���ڸ� �Է��Ͻÿ� : ");
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
			printf("�߸� �Է��߽��ϴ�.\n");
		}
		
	}
	

	


}