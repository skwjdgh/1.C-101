#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int start, end, cout, temp;
	int i;
	int hap = 0;

	printf("�� ���� ���ڸ� �Է��ϼ���\n");
	scanf("%d %d", &start, &end);
	printf("���ϴ� ����� �Է��ϼ���\n");
	scanf("%d", &cout);

	printf("�հ��� ���۰� ==> %d\n", start);
	printf("�հ��� ���� ==> %d\n", end);
	printf("��� ==> %d\n", cout);

	if (start > end)
	{
		temp = start;
		start = end;
		end = temp;
	}

	for (i = start; i <= end;i++)
	{
		if (i % cout == 0)
			hap = hap + i;
	}

printf("%d ���� %d������ %d����� �հ� ==> %d\n", start, end, cout, hap);
 
}