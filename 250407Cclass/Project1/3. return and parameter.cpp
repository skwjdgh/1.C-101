#include <stdio.h>

/*void func1()
{
	printf("void�� �Լ��� ������ �� ����. \n");
}

int func2()
{
	return 100;
}

void main()
{
	int a;

	func1();

	a = func2();
	printf("int �Լ����� ������ �� ==> %d\n", a);
}*/

/*void func1(int a)
{
	a = a + 1;
	printf("���޹��� a ==> %d\n", a);

}

void main()
{
	int a = 10;

	func1(&a);
	printf("func1() ���� ���� a ==> %d\n", a);

}*/

/*void func1(char a, char b)
{
	int imsi;

	imsi = a;
	a = b;
	b = imsi;
}

void func2(char* a, char* b) // call by reference
{
	int imsi;

	imsi = *a;
	*a = *b;
	*b = imsi;
}

void main()
{
	char x = 'A', y = 'Z';

	printf("���� ��      : x= %c, y = %c\n", x, y);

	func1(x,y);
	printf("���� ������ �� : x=%c ,y =%c\n", x, y);

	func2(&x, &y);
	printf("���� ������ �� : x=%c ,y =%c\n", x, y);

}*/