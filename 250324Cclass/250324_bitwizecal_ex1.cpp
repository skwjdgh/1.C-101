#include <stdio.h>

void main()
{
	char a = 'A', b, c;
	char mask = 0x0F; // 0000 1111

	printf("%x & %x = %x \n", a, mask, a & mask); //��Ʈ ���� 0100 0001 & 0000 1111 = 0000 0001 ��
	printf("%x | %x = %x \n", a, mask, a | mask); //��Ʈ ���� 0100 0001 | 0000 1111 = 0100 1111 ��

	mask = 'a' - 'A'; // ascii 'a' = 97, ascii 'A' = 65, �� ���̴� 32�̴�.

	b = 'A' ^ mask; //0100 0001 ^ 0010 0000 = 0110 0001
	printf("%c ^ %d = %c \n", a, mask, b); // �ҹ��� 'a' ���
	a = 'a' ^ mask; //0110 0001 ^ 0010 0000 = 0100 0001
	printf("%c ^ %d = %c \n", b, mask, a);

}