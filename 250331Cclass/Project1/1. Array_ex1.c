#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

/*void main()
{
	int a, b, c, d;
	int hap;

	printf("1��° ���ڸ� �Է��ϼ��� :");
	scanf(" %d", &a);
	printf("2��° ���ڸ� �Է��ϼ��� :");
	scanf(" %d", &b);
	printf("3��° ���ڸ� �Է��ϼ��� :");
	scanf(" %d", &c);
	printf("4��° ���ڸ� �Է��ϼ��� :");
	scanf(" %d", &d);

	hap = a + b + c + d;

	printf("�հ� == > %d \n", hap);

}*/

/*void main()
{
	int aa[4];
	int hap;

	printf("1��° ���ڸ� �Է��ϼ��� :");
	scanf("%d", &aa[0]);
	printf("2��° ���ڸ� �Է��ϼ��� :");
	scanf("%d", &aa[1]);
	printf("3��° ���ڸ� �Է��ϼ��� :");
	scanf("%d", &aa[2]);
	printf("4��° ���ڸ� �Է��ϼ��� :");
	scanf("%d", &aa[3]);

	hap = aa[0]+aa[1]+ aa[2] +aa[3];

	printf("�հ� == > %d \n", hap);
}*/

/*void main()
{
	int aa[4];
	int i,hap=0;

	printf("1��° ���ڸ� �Է��ϼ��� :");
	scanf("%d", aa+0);
	printf("2��° ���ڸ� �Է��ϼ��� :");
	scanf("%d", aa+1);
	printf("3��° ���ڸ� �Է��ϼ��� :");
	scanf("%d", aa+2);
	printf("4��° ���ڸ� �Է��ϼ��� :");
	scanf("%d", aa+3);

	for (i = 0;i < 4;i++)
		hap += aa[i]; //hap = hap + aa[i]

	printf("�հ� == > %d \n", hap);
}*/

/*int main()
{
	int aa[4];
	int hap = 0;
	int i;

	for (i = 0;i <= 3; i++)
	{
		printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
		scanf("%d", &aa[i]);           //aa + i�� ����ص� ���� ����
		// hap += scanf("%d", &aa[i]); �Ұ����� scanf�� ���� ������ ��ȯ�ϰ� ��
		// hap += *(aa+i); �� ������, ������ ���� ������� hap += aa[i]�� ������ 
	}
	hap = aa[0] + aa[1] + aa[2] + aa[3];
	printf("�հ� == > %d \n", hap);

	return 0;
}*/


/*void main()
{
	int aa[4] = { 100,200,300,400 };
	int bb[] = { 100,200,300,400 };
	int cc[4] = { 100,200 };
	int dd[4] = { 0 };
	int i;

	for (i = 0; i <= 3;i++)
	{
		printf("aa[%d] ==> %d\t", i, aa[i]);	
	}
	printf("\n");
	for (i = 0; i <= 3;i++)
	{
		printf("bb[%d] ==> %d\t", i, bb[i]);
	}
	printf("\n");
	for (i = 0; i <= 3;i++)
	{
		printf("cc[%d] ==> %d\t", i, cc[i]);
	}
	printf("\n");
	for (i = 0; i <= 3;i++)
	{
		printf("dd[%d] ==> %d\t", i, dd[i]);
	}
	printf("\n");

}*/

/*void main()

{

	int aa[100], bb[100];
	int i,j;

	
	for (i = 0; i < 100; i ++)
	{
		for (j = 0; j < 200; j +=2 )
			aa[i] = j; //���ο� �����Ƿ� ������ �ȵ�
		bb[i] = aa[99 - i];
	} �߸� ���� �ٽ� �غ���



	// for (i=0 ; i <100 ; i++)
	//		aa[i] = i *2;
	//		printf("aa[%d] = %d ", i , aa[i]);
	// for (i= 99,j = 0; i>=0;i++,j--)
	//		bb[j] = aa[i];
 	printf("%d %d", aa[1], bb[99]);
}*/ 

/*void main()
{

	int aa[] = { 10,20,30,40,50 };	
	int count;

	count = sizeof(aa) / sizeof(int);

	printf("�迭 aa[]�� ����� ������ %d �Դϴ�. \n", count);
}*/


/*void main()
{

	char ss[8] = "Basic-C";
	int i;

	ss[5] = '#';

	for (i = 0; i < 8;i++)
		printf("ss[%d] ==> %c \n", i, ss[i]);

	printf("���ڿ� �迭 ss ==>%s \n", ss);
}*/

/*void main()
{

	char ss[5] = "abcd";
	char tt[5];
	int i;

	for(i=0; i<4 ; i++)
	{
		tt[i] = ss[3 - i];
	}

	tt[4] = '\0'; //�迭 �������� �� ���� ����

	printf("�Ųٷ� ����� ��� ==> %s\n", tt);
}*/

/*void main()
{

	char ss[] = "XYZ";
	int len;

	len = strlen(ss);
	
	printf("���ڿ� \"%s\"�� ���� ==> %d \n", ss, len);

}*/
/*
int MyStrlen(char* in_str); //#include <string.h> �����ؾ���

int main()
{
	char ss[] = "My String";
	int len;

	len = MyStrlen(ss);

	printf("���ڿ� \"%s\"�� ���� ==> %d \n", ss, len);

	return 0;
}

int MyStrlen(char* in_str)
{
	int i = 0;
	while (1)
	{
		if (*(in_str+i) == '\0')
			break;
		i++;
	}
	return i;
}*/
/*void main()
{
	char ss[4];

	strcpy(ss, "XYZ");

	printf("���ڿ� ss�� ���� ==> %s \n",ss);

}*/

/*void main()
{
	char ss[7] = "XYZ";

	strcat(ss, "ABC");

	printf("���ڿ� ss�� ���� ==> %s \n", ss);

}*/

/*void MyStrcat(char* src, char* str)
{
	int i, j = 0;
	for (i = MyStrlen(src); i < MyStrlen(str);i++)
		src[i] = str[j];
	src[MyStrlen(src)] = 'WO';
}*/

/*int main()
{
	char ss[20];
	char tt[20];
	int r1, r2;

	puts("ù ��° ���ڿ��� �Է��ϼ���.");
	gets(ss);

	puts("�� ��° ���ڿ��� �Է��ϼ���.");
	gets(tt);

	r1 = strlen(ss);
	r2 = strlen(tt);

	printf("ù ��° ���ڿ��� ���� ==> %d\n", r1);
	printf("�� ��° ���ڿ��� ���� ==> %d\n", r2);

	if (strcmp(ss, tt) == 0)
		puts("�� ���ڿ��� ������ �����ϴ�. \n");
	else
		puts("�� ���ڿ��� ������ �ٸ��ϴ�. \n");

	return 0;

}
*/
	