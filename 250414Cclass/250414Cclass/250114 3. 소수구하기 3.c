//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//�����佺�׳׽��� ü �迭 , �Ҽ��� �迭�� ������ ������ �迭��

//int main()
//{
//	int max = 100000;
//	int arr[100000] = {0};
//	int a;
//	int i,j; // ���� �Ҽ���� ����

//	printf("������ �Է��ϼ���");
//	scanf("%d", &a);

//	arr[1] = 1;

//	for (i = 2; i*i < max; i++)
//	{
		
//		for (j = 2; i*j < max;j++)
//		{
//			arr[i * j] = 1;
//		}
//	}

//	if (arr[a] == 0)
//		printf("%d�� �Ҽ�\n", a);
//	else
//		printf("%d�� �Ҽ��� �ƴ�\n", a);

//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h> 

#include<stdlib.h> 

#include<windows.h> 

#include<conio.h> 

#include<time.h> 



// �Ҽ����ϱ�(�����佺�׳׽��� ü) 

int main() {

	// ���� ���� 

	int num[100000] = { 0 };

	int i, j;

	char chk;

	int in;



	// ü �ʱ�ȭ 

	for (i = 0; i < 1000; i++) 
	{
		if (i % 2 != 0 && i % 3 != 0)
			num[i] = i;  

	}



	//for (i = 0; i < 1000; i++) 

	//printf("%d  ", num[i]); 

	for (i = 4; i < 1000; i++) {
		chk = 'T';
		if (num[i] != 0) {
			for (j = 2; j <= i; j++) {
				if (num[i] % j == 0) {
					chk = 'F'; break;
				}
			}
		}
		printf("%d��° : ", i);
		if (chk == 'T') {
			for (j = i; j < 1000; j = j + i)
				num[j] = 0;
		}
	}
	for (i = 1; i < 1000; i++) {
		if (num[i] != 0)
			printf("%d  ", num[i]);

	}

	// ����ڷκ��� �� �Է� �ޱ� 

	printf("1~100 ������ ���� ���� �Է��ϼ��� : ");

	scanf("%d", &in);



	// �Ҽ� ��� �� ��� ��� 

	if (num[in] != 0)

		printf("%d�� �Ҽ��̴�.", in);

	else

		printf("%d�� �Ҽ��� �ƴϴ�.", in);

	return 0;

}