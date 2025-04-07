#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int point;
    char tri[101]; // ���� ������ ���ڿ�
    int a, i, range;

    printf("�������� ��ġ�� �Է��ϼ��� (0 ~ 100): ");
    scanf("%d", &point);

    // �Է°� ����
    if (point < 0 || point > 100) {
        printf("�߸��� �Է��Դϴ�. 0 ~ 100 ������ ���� �Է��ϼ���.\n");
        return 1;
    }

    // �ﰢ�� ũ�� ����
    if (point < 50) {
        range = point;
    }
    else {
        range = 100 - point;
    }

    // ���ڿ� �������� �ʱ�ȭ
    for (a = 0; a < 101; a++) {
        tri[a] = ' ';
    }
    tri[100] = '\0'; // ���ڿ� �� ����

    // ������ ���
    tri[point] = '*';
    puts(tri);

    int start = point - range+1; // ������ �� ���۰�
    int end = point + range+1;   // ������ �� ����

    // �ﰢ�� ��ü ���
    for (i = 1; i < range-1; i++) {
        // �� �� ��� ���� �ٽ� �������� �ʱ�ȭ
        for (a = 0; a < 101; a++) {
            tri[a] = ' ';
        }
        tri[point - i] = '*';
        tri[point + i] = '*';
        tri[100] = '\0';
        puts(tri);
    }

    // �ﰢ�� �ظ� ���
    for (a = 0; a < 101; a++) {
        tri[a] = ' ';
    }
    for (a = start; a <= end +1 ; a++) {
        tri[a] = '*';
    }
    tri[100] = '\0';
    puts(tri);

    return 0;
}