
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

/*int main()
{
	char a[100];
	
	int point; //�Է°� 
	int count=0; //ī����

	int ts = 1;
	int i;

	printf("��� �������� ��ġ�� �Է��ϼ���");
	scanf("%d",&point); //���� ��ġ �Է�

	int end = 2 * point-1;

	for (i = 0; i < end; i++)
	{
		a[i] = ' '; //�迭 �ʱ�ȭ
		//���ڿ� ��
	}
	a[end] = '\0';

	a[point-1] = '*'; //ù �Է°��� �������� '*'
	puts(a); //���� �Է��� ���� put ����Ͽ� ���� ���


	for (i = 1;i < end; i++)
	{
		if (ts < point)
		{
			a[point - ts] = '*';
			a[point + ts] = '*';
			ts++;
		}
		puts(a);
	}

	for (i = 0;i < end ; i++) //point -- �ؼ� ���� �ȴٸ� ���� *
	{
		a[point] = '*';
		a[end] = '\0';
		puts(a);
	}
	

	return 0;

}*/

/*int main()
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < j + 1; i++)
		{
			if (i == 0 || j == 9 || i == j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}*/

int main()
{
	//���� �ﰢ���� ũ�⸦ ���Ѵ�. �� ���� 11���� ���� �̷���� �ﰢ��
	char star[11];
	int point = 5;
	int i, j;





}