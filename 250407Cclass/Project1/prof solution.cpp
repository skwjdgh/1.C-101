// ������ ���α׷� 

#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h> 



void gugudan(int x) {

	int i;



	for (i = 1; i < 10; i++) {

		printf("%d * %d = %d \n", x, i, x * i);

	}

}



int main() {

	// ���� ���� 

	int dan;



	// ����� �� �Է� 

	printf("����� ���� 2��~9�� ������ ���� �����ϼ���!!!");

	scanf("%d", &dan);



	// ������ ��� 

	gugudan(dan);



	return 0;

}





// ��.�ҹ��� ��ȯ 

#include<stdio.h> 



int main() {

	// ���� ���� 

	char str[100];

	int i;

	int diff;



	// ���� �Է� 

	printf("���ڿ��� �Է�(100�� �̳�) : ");

	gets(str);



	// ��.�ҹ��� ��ȯ �� ��� 

	diff = 'a' - 'A';



	for (i = 0; i < 100; i++) {

		if (str[i] >= 'A' && str[i] <= 'Z')

			str[i] = str[i] + diff;

		else if (str[i] >= 'a' && str[i] <= 'z')

			str[i] = str[i] - diff;

		else

			str[i] = str[i];

	}



	printf("��ȯ�� ��� ==> %s ", str);



	return 0;

}



// ��.�ҹ��� ��ȯ(�Լ� ����) 

#include<stdio.h> 



void str_conv(char* pt) {

	int i;

	int diff = 'a' - 'A';



	for (i = 0; i < 100; i++) {

		if (pt[i] >= 'A' && pt[i] <= 'Z')

			pt[i] = pt[i] + diff;

		else if (pt[i] >= 'a' && pt[i] <= 'z')

			pt[i] = pt[i] - diff;

		else

			pt[i] = pt[i];

	}



	printf("��ȯ�� ��� ==> %s ", pt);

}

// ��.�ҹ��� ��ȭ 

int main() {

	// ���� ���� 

	char str[100];

	// ���� �Է� 

	printf("���ڿ��� �Է�(100�� �̳�) : ");

	gets(str);



	// ��.�ҹ��� ��ȯ �� ��� 

	str_conv(str);



	return 0;

}





// �ζ� �ڵ� ��÷ 



#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h> 

#include<stdlib.h> 

#include<time.h> 



void lotto() {

	int i, j;

	int val[6];

	// �ʱ� �ζǹ�ȣ ��� 

	srand(time(NULL)); // ���� �õ� �ʱ�ȭ 

	for (i = 0; i < 6; i++) {

		val[i] = rand() % 6 + 1;

	}

	// �ߺ� ��ȣ ���� 

	for (i = 0; i < 6; i++) {

		val[i] = rand() % 45 + 1;

		if (i != 0) {

			for (j = i; j >= 0; j--) {

				if (i != j) {

					if (val[i] != val[j])

						continue;

					else {

						val[i] = rand() % 45 + 1;

						j = i; // ó������ �ٽ� �ߺ� �� 

					}

				}

			}

		}

		printf("%5d", val[i]);

	}

}



int main() {



	// ���� �߻�(1~45 ���� ���� : rand() % 45 + 1) 

	printf("** �ζ� ��÷�� �����մϴ�. ** \n");

	printf("��÷�� �ζ� ��ȣ ==> ");



	lotto();



	return 0;

}