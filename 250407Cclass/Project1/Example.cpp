#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

/*void multiplier(int a)
{

	for (i = 1;i < 10;i++)
	{
		printf(" %d X %d = %d\n", a, i, a*i);
	}
 
}

int main()
{
	int a;
	int result;

	printf("����ϰ� ���� ���� �Է� :");
	scanf("%d", &a);

	multiplier(a);

	return 0;
}*/
/*
char upper(char ch)
{
	int result;
	result = ch - ('a' - 'A'); //('a' - 'A') �� ascii ������ �ҹ���, �빮���� ���̸� �� �� �ִ�. �̸� ch���� ���ų� ���� ���, �ҹ��ڿ� �빮�ڸ� ������ �� �ִ�.
	return result;
}

char lower(char ch)
{
	int result;
	result = ch + ('a' - 'A');
	return result;
}

void main()
{
	char in[100], out[100];
	char ch;
	int i= 0;

	printf("���ڿ��� �Է�");
	scanf("%s", &in);

	for (i = 0; i < strlen(in); i++)
	{
		ch = in[i];
		if (ch >= 'A' && ch <= 'Z')
			out[i] = lower(ch);
		else if (ch >= 'a' && ch <= 'z')
			out[i] = upper(ch);
		else
			out[i] = ch;
	}
	out[i] = '\0';
	printf("��ȯ�� ��� ==> %s\n", out);


}

*/

int getNumber()
{
	return rand() % 45 + 1;
}


void main()
{
	short int lotto[6] = { 0, };
	int i, k, num;
	char dup = 'N';


	printf("**�ζ� ��÷�� �����մϴ�.**\n");
	srand((unsigned)time(NULL));
	
	for (i = 0;i < 6;)
	{
		num = getNumber();

		for (k = 0;k < 6;k++)
		{
			if (lotto[k] == num)
				dup = 'Y';

		}
		if (dup == 'N')
			lotto[i++] = num;

		else
			dup = 'N';
	}

	printf("������ �ζ� ��ȣ ==> ");
	for (i = 0;i < 6;i++)
	{
		printf("%d ", lotto[i]);
	}

	printf("\n\n");

}