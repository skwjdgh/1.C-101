//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int randnum[5];
//	int m, k;
//
//	for( int i = 0; i < 5 ;i++)
//	{
//		randnum[i] = rand() % 10;
//	}
//
//	
//	int max =0 ;
//	int smax =0 ;
//
//	for (int j = 0; j<5 ;j++)
//		if (randnum[j] > max)
//		{
//			smax = max;
//			max = randnum[j];
//		}
//		else if (randnum[j] > smax && randnum[j] < max)
//		{
//			smax = randnum[j];
//		}
//
//	scanf("%d %d", &m, &k);
//
//	int cals,scals;
//	cals = m % k;
//	scals = m - cals;
//
//	int result;
//
//	result = (max * scals) + (smax * cals);
//
//	printf("����� %d �Դϴ�.", result);
//
//	return 0;
//}
//
//  m�� �ִ� ���� Ƚ��, k�� ���ӵ� ��  m%k = a ���� �ι� ° ���� ���ϰ�, m-a�� �ִ���� ���Ͽ� ����
