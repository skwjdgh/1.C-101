//#define _CRT_SECURE_NO_WARNINGS
//#include< stdio.h>
//#include<malloc.h>

/*
int main()
{
	int aa[3];
	int* p; //������ ������ ������ �����Ѵ�.
	int i, hap = 0;

	for (i = 0; i < 3; i++)
	{
		printf("%d ��° ���� : ", i + 1);
		scanf("%d", &aa[i]);

	}
	p = aa;

	for (i = 0;i < 3;i++)
		hap = hap + *(p + i);

	printf("�Է� ������ �� => %d\n", hap);
}
*/

/*int main()
{ 

	int aa[10000];
	int* p;
	int i,hap = 0;
	int cnt;

	printf("�Է��� ������? : ");
	scanf("%d", &cnt);

	for (i = 0; i < cnt; i++)
	{
		printf("%d ��° ���� : ", i + 1);
		scanf("%d", &aa[i]);
	}

	p = aa;

	for (i = 0; i < cnt; i++)
		hap = hap + *(p + i);

	printf("�Է� ������ �� ==> %d\n", hap);


	return 0;
}*/

/*int main()
{
	int* p;
	int i, hap = 0;
	int cnt;

	printf("�Է��� ������? : ");
	scanf("%d", &cnt);

	p = (int*)malloc(sizeof(int) * cnt);

	for (i = 0;i < cnt;i++)
	{
		printf("%d ��° ���� : ", i + 1);
		scanf("%d", &p[i]); //p+i

	}

	for (i = 0; i < cnt; i++)
	{
		hap = hap + *(p + i);
	}

	printf("�Է� ���� �� ==> %d\n", hap);
	free(p); // �޸� ����, ��� ���Ḧ ���� ������ ���!! ������ ������ �ΰ��� �ִ´ٴ� �ǹ� 



	return 0;
}*/

// calloc() : malloc()�� ���������� ���� 0���� �ʱ�ȭ ��Ŵ!!

/*int main()
{
	int* p;
	int i, hap = 0;
	int cnt = 0;
	int data;

	p = (int*)malloc(sizeof(int) * 1);
	printf(" 1 ��° ���� : ");
	scanf("%d", &p[0]);
	cnt++;

	for (i = 2;;i++)
	{
		printf(" %d ��° ���� : ", i);
		scanf("%d", &data);

		if (data != 0)
			p = (int*)realloc(p, sizeof(int) * i);
		else
			break;

		p[i - 1] = data;
		cnt++;

	}

	for (i = 0; i < cnt;i++)
	{
		hap = hap + i;
		
	}
	printf("�Է� ���� �� ==>%d\n", hap);

	free(p);
	return 0;
}*/