//�������� ���Ͽ� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*void main()
{
	char s[120];
	int i, k;
	FILE* wfp;

	wfp = fopen("C:\\Users\\AISW\\Desktop\\C��� �ǽ�\\250407Cclass\\Project2\\gugu.txt", "w");

	for (i = 2;i <= 9;i++)
		fprintf(wfp, "# ��%d �� ", i);
	fprintf(wfp, "\n\n");

	for (i = 2;i <= 9;i++)
	{
		for (k = 1; k <= 9; k++)
		{
			fprintf(wfp, "%2d X %d = %2d", i, k, i * k);
		}
	fprintf(wfp, "\n\n");
	}	
}*/


// ���Ͽ��� �о�� ���ڿ��� ���Ͽ� �ݴ� ������ ���

int main()
{
	int i;
	char bf[20];

	FILE* rfp;
	FILE* wfp;

	rfp = fopen("C:\\Users\\AISW\\Desktop\\C��� �ǽ�\\250407Cclass\\Project2\\gugu.txt", "r");
	wfp = fopen("C:\\Users\\AISW\\Desktop\\C��� �ǽ�\\250407Cclass\\Project2\\out 1.txt", "w");

	while (1)
	{
		fgets(bf, 20, rfp);

		for (i = strlen(bf) - 2; i >= 0; i--)
		{
			printf("%c", bf[i]);

		}
		printf("\n");

		if (feof(rfp)) // file end of file
			break;
	
	}

	fclose(rfp);
	fclose(wfp);

	return 0;
}
