#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	char s[20];
	FILE* rfp; //���� ������

	rfp = fopen("C:\\Users\\AISW\\Desktop\\C��� �ǽ�\\250407Cclass\\Project2\\data1.txt", "r"); //�б��� ����

	fgets(s, 20, rfp); //���ڿ��� �о 

	printf("���Ͽ��� ���� ���ڿ� : ");
	puts(s);

	fclose(rfp);

}

*/

/*void main()
{
	char str[200];
	FILE* rfp;

	rfp = fopen("C:\\windows\\win.ini", "r");

	for (;;)
	{
		fgets(str, 200, rfp);
		if (feof(rfp))
			break;
		printf("%s", str);
	}
	
	fclose(rfp);
	
}*/

/*void main()
{
	FILE* rfp;
	int hap = 0;
	int in, i;

	rfp = fopen("C:\\Users\\AISW\\Desktop\\C��� �ǽ�\\250407Cclass\\Project2\\data1.txt", "r");

	for (i = 0;i < 5;i++) {
		fscanf(rfp, "%d", &in);
		hap = hap + in;
	}
	printf("�հ� ==> %d\n", hap);
	fclose(rfp);
}*/

/*void main()
//{
	/*char s[20];
	//FILE* wfp;


	//wfp = fopen("C:\\Users\\AISW\\Desktop\\C��� �ǽ�\\250407Cclass\\Project2\\data1.txt", "w");


	//printf("���ڿ��� �Է�(�ִ� 19��) :");
	//gets(s);

	//fputs(s, wfp);
	//fclose(wfp);
//}*/

//void main()
//{
	//FILE* wfp;
	//int hap = 0;
	//int in, i;

	//wfp = fopen("c:\\temp \\ data7.txt", "w");

	//for (i = 0;i < 5;i++)
	//{
	//	printf("���� %d : ", i + 1);
		//scanf("%d", &in);
		//hap = hap + in;

	//}

	//fprintf(wfp, "�հ� ==> :%d\n", hap);

	//fclose(wfp);
//}