//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

/*void main()
{
	int coffee;

	printf("� Ŀ�� �帱���?(1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);

	printf("\n# 1. �߰ſ� ���� �غ��Ѵ�\n");
	printf("# 2. �������� �غ��Ѵ�\n");
	

	switch (coffee)
	{
	case 1: printf("# 3. ����Ŀ�Ǹ� ź��.\n");
		break;
	case 2: printf("# 3. ����Ŀ�Ǹ� ź��.\n");
		break;
	case 3: printf("# 3. ��Ŀ�Ǹ� ź��.\n");
		break;
	default: printf("# 3. �ƹ��ų� ź��.\n");
		break;
	}

	printf("# 4. ���� �״´�.\n");
	printf("# 5. ��Ǭ���� ��� ���δ�.\n\n");

	printf("�մ�~ Ŀ�� ���� �ֽ��ϴ�.\n\n");

}*/

/*int coffee_machine(int button)
{

	printf("\n# 1. �߰ſ� ���� �غ��Ѵ�\n");
	printf("# 2. �������� �غ��Ѵ�\n");

	const char* coffee_name; #�����ʹ� ������ ���� �����ϴ� ���, call by differncial. call by value�� �纻�� ���� �����ϴ� ������

	switch (button)
	{
	case 1: 
		coffee_name = "����";
		printf("# 3. ����Ŀ�Ǹ� ź��.\n");
		printf("# 3. ����Ŀ�Ǹ� ź��.\n");
		break;
	case 2: 
		coffee_name = "����";
		printf("# 3. ����Ŀ�Ǹ� ź��.\n");
		printf("# 3. ����Ŀ�Ǹ� ź��.\n");
		break;
	case 3: 
		coffee_name = "��";
		printf("# 3. ��Ŀ�Ǹ� ź��.\n");
		printf("# 3. ��Ŀ�Ǹ� ź��.\n");
		break;
	default:
		coffee_name = "";
		printf("# 3. �ƹ��ų� ź��.\n");
		printf("# 3. �ƹ��ų� ź��.\n");
		break;
	}
	printf("# 4. ���� �״´�.\n");
	printf("# 5. ��Ǭ���� ��� ���δ�.\n\n");
	
	printf("�մ�~ %s Ŀ�� ���� �ֽ��ϴ�.\n\n", coffee_name);

	return 0;
}

void main()
{
	int coffee;
	int ret;

	printf("� Ŀ�� �帱���?(1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	

	printf("� Ŀ�� �帱���?(1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	

	printf("� Ŀ�� �帱���?(1:����, 2:����, 3:��) ");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
}*/

/*int calc(int v1, int v2, int op)
{
	int result;

	switch (op)
	{
	case 1: result = v1 + v2;
		break;
	case 2: result = v1 - v2;
		break;
	case 3: result = v1 * v2;
		break;
	case 4: result = v1 / v2;
		break;
	case 5: result = v1 % v2;
		break;
	default: result = 0;
	}

	return result;
}

int main()
{
	int res;
	int oper, a, b;

	printf("��� �Է� (1:+, 2:-, 3:*, 4:/, 5:%%): ");
	scanf("%d", &oper);

	printf("����� �� ���ڸ� �Է�:");
	scanf("%d %d", &a, &b);

	res = calc(a, b, oper);

	printf("��� ����� : %d\n", res);

	return 0;

}*/

