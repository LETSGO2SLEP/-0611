#include<stdio.h>
#include<ctype.h>

int string_main(void)
{
	printf("strcpy(str, \"world\"); ���ڿ� ���� �Լ�\n\n");
	char str[10] = "hello!";
	strcpy(str, "world");

	printf("%s\n", str);

	//	int getchar(void) : �ϳ��� ���ڸ� �о ��ȯ�Ѵ�.
	//	void putchar(int c) : ���� c�� ����� ���ڸ� ����Ѵ�.
	//	int _getch(void) :  �ϳ��� ���ڸ� �о ��ȯ�Ѵ�.(���۸� ������� ����)
	//	void _putch(int c) : ���� c�� ����� ���ڸ� �о ����Ѵ�.(���۸� ������� ����)
	//	scanf(%c,&c) : �ϳ��� ���ڸ� �о ���� c�� �����Ѵ�.
	//	printf("%c",c) : ���� c�� ����� ���ڸ� ����Ѵ�.

	//
	//int ch;
	//while ((ch = getchar()) != EOF)  // EOF�� ctrl+z, EOF�� �Էµɶ� ���� (�ϳ� �̻���)���ڸ� �Է� �ް� ����Ѵ�.
	//{
	//	putchar(ch);
	//}

	// �ﰢ���� ������ ���ҋ��� getch�� ����ؾ� �Ѵ�.

	//	int scanf("%s",s) : ���ڿ��� �о ���ڹ迭 s�� ����
	//	int printf("%s",s) : �迭 s�� ����Ǿ� �ִ� ���ڿ��� ����Ѵ�.
	//	char *gets_s(char *s, int size) : �� ���� ���ڿ��� �о �迭 s�� �����Ѵ�.
	// int puts(const char *s) : �迭 s�� ����Ǿ� �ִ� �� ���� ���ڿ��� ����Ѵ�.

	// ���� �ܾ�� �̷���� �� �� ��ü�� �Է¹������� gets_s()�� ����ؾ� �Ѵ�.

	char buf[100];
	gets_s(buf, 100);  // �Է¹޴´�. �� ���� ���� �ܾ���
	puts(buf);

	/*
	printf("�ҹ��ڸ� �빮�ڷ� �ٲٴ� ���α׷�");

	int c;
	while ((c = getchar()) != EOF)
	{
		if (islower(c))
			c = toupper(c);
		putchar(c);
	}
	return 0;

	//	gets_s

	char name[100];
	char address[100];

	printf("�̸��� �Է��ϼ��� : ");
	gets_s(name, 100);
	printf("�ּҸ� �Է��ϼ��� : ");
	gets_s(address, 100);
	*/
	//	strlen(s) : ���ڿ��� ���̸� ���Ѵ�.
	//	strcpy(s1,s2) : s2�� s1�� �����Ѵ�.
	//	strcat(s1,s1) : s2�� s1�� ���� �ٿ��ִ´�.
	//	strcmp(s1,s2) : s1�� s2�� ���Ѵ�.  // s1�� s2 ���� �տ� ������ ���� ������ ��� s2�� �տ� ������ ����� ��ȯ�ȴ�.

	// ���ڿ� �˻� // strstr

	printf("���ڿ� �˻�\n\n");
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joy";

	char *p;
	int loc;
	p = strstr(s, sub); // ���ڿ��� �˻��Ǵ� ���� �ּҸ� ����

	loc = (int)(p - s);  // �κ� ���ڿ��� �ּҿ��� ��ü ���ڿ� ������ �� ����Ѵ�.
	if (p != NULL)  // p �� �߰��� ������
		printf("%s ���� ù��° %s�� %d���� �߰ߵǾ���", s, sub, loc);
	else
		printf("%s�� �߰ߵ��� ����",sub);
	

}