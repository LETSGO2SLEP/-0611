#include<stdio.h>
#include<string.h>

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	
	char cal[][10] = {
		"add","sub","mul","div",0
	};

	char s1[10] = " ";
	printf("������ �Է��ϼ��� : ");
	scanf("%s %d %d", s1, &num1, &num2);
	

	int i = 0;
	while (cal[i] != 0)
	{
		if (strcmp(cal[i], s1) == 0)
		{
			break;
		}
		i++;
	}

	switch (i)
	{
	case 0:
		num1 + num2;
		printf("������ ��� : %d", num1 + num2);
		break;
	case 1:
		num1 - num2;
		printf("������ ��� : %d", num1 - num2);
		break;
	case 2:
		num1 * num2;
		printf("������ ��� : %d", num1 * num2);
		break;
	case 3:
		num1 + num2;
		printf("������ ��� : %d", num1 / num2);
		break;
	default:
		printf("���� �߻�");
		break;
	}

	return 0;
}