#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

/*int main()
{
	char aa[7];
	char bb[7];
	int i;

	puts("ù ��° ���ڿ��� �Է��ϼ���.");
	gets(aa);

	for (i = 0; i < 6; i++)
	{
		bb[5 - i] = aa[i];
	}
	puts(bb);



}*/

/*int main()
{
	char aa[10];
	int i, count=0;

	printf("���ڿ��� �Է��ϼ��� :");
	scanf("%s", aa);

	for (i = 0;i < 10; i++)
	{
		if (aa[i] == '\0')
		{
			count = i-1;
			break;
		}
	}
	printf("������ �Ųٷ� ��� ==> ");
	for (i = count; i >= 0; i--)
	{
		printf("%c", aa[i]);
	}
	return 0;

}*/

/*int main()
{
	char a[100];
	char b[100] = { 0 };

	int i;
	int len;

	printf("���ڿ��� �Է��� �ּ��� : ");
	gets(a); //scanf�� ����� ���, ����� �����ϱ� ������ ���⿡ ���� ����� �ٸ��� ����

	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		if (a[i] == '\0')
		{
			break;
		}
		else
		{
			if (a[i] >= 65 && a[i] <= 90)
				b[i] = a[i] + 32;

			else if (a[i] >= 97 && a[i] <= 122)
				b[i] = a[i] - 32;
			else
				b[i] = a[i];

		}
	}
	
	printf("��ȯ�� ���� ==> ");
	puts(b);

	//�빮�� 65 - 90
	//�ҹ��� 97 - 122

	return 0;
}*/

/*int main()
{
	int mul[9][9];
	int i, j;




	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
		{ 
			mul[i][j] = (i+1) * (j+1);
			printf(" %d X %d = %d \n", i+1, j+1, mul[i][j]);
		}
		printf("\n");


	return 0;
}*/

/*int main()
{
	char aa[100];
	char A='i', B='#';
	int i,len;

	printf("���ڿ��� �Է��� �ּ��� : ");
	gets(aa);

	len = strlen(aa);
	for (i = 0; i < len; i++)
	{
		if (aa[i] == A)
			aa[i] = B;
	}

	puts(aa);

	return 0;
}*/
