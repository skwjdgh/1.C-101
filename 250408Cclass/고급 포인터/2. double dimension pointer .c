/*#include <stdio.h>

int main()
{
	char data[3][10];
	int i;

	for (i = 0;i < 3;i++)
	{
		printf("%d 번째 문자열 : ", i + 1);
		gets(data[i]);
	}
	printf("\n -입력과 반대로 출력(이차원 배열)-\n");
	for (i = 2;i >= 0;i--)
	{
		printf(" %d :%s\n", i + 1, data[i]);
	}


}*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>

/*int main()
{

	char* p[3];
	char imsi[100];
	int i, size;

	for (i = 0;i < 3;i++)
	{
		printf("%d 번째 문자열 : ", i + 1);
		gets(imsi);

		size = strlen(imsi);
		p[i] = (char*)malloc((sizeof(char) * size) + 1);

		strcpy(p[i], imsi);
	}
	printf("\n -입력과 반대로 출력(포인터) -\n");

	for (i = 2;i >= 0; i--)
	{
		printf("%d :%s\n", i + 1, p[i]);
	}

	for (i = 0;i < 3;i++)
		free(p[i]);


	return 0;
}*/