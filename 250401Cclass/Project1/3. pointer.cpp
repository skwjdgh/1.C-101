#include <stdio.h>

/*int main()
{
	char ch;
	char* p;

	ch = 'A';
	p = &ch;

	
	printf("ch�� ������ �ִ� �� : ch ==> %c \n", ch);
	printf("ch�� �ּ� (address) : ch ==> %d \n", &ch);
	printf("p�� ������ �ִ� �� : p ==> %d \n", p);
	printf("p�� ������ �ִ� �� : *p ==> %c \n", *p);




	return 0;
}*/

/*int main()
{
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch;

	q = p;

	*p = 'Z';

		printf("ch�� ������ �ִ� �� : ch ==> %c \n\n", ch);


}*/


/*int main()
{
	char s[8] = "Basic-C";
	char* p; //������p
	int i;


	p = s; //������ p �� ���ڿ� s�� �ּҰ� �Էµ�

	for (i = sizeof(s) - 2; i >= 0; i--) //���۰��� ���ڿ��� ũ�⿡�� 2�� ����  0�� �� ������ i�� ����
		printf("%c", *p + i);

	printf("\n");


	return 0;
}*/

/*int main()
{

	char s[8] = "Basic-C";
	char* p;
	int i;

	p = s;

	for (i = sizeof(s) - 2;i >= 0;i--)
		printf("%c", *(p + i));

	printf("\n");
}*/