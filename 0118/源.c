#define _CRT_SECURE_NO_WARNINGS 1

////���������մӴ�С���
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a < b)
//		{
//			d = a;
//			a = b;
//			b = d;
//		}
////		printf("%d %d %d\n", a, b, c);
//		if (a < c)
//		{
//			d = a;
//			a = c;
//			c = d;
//		}
////		printf("%d %d %d\n", a, b, c);
//		if (b < c)
//		{
//			d = b;
//			b = c;
//			c = d;
//		}
//		printf("%d %d %d\n", a, b, c);
//	}
//	return 0;
//}
//

//��1-100֮������9���ֵĴ���
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//		{
//			sum++;
//			printf("%d ", i);
//		}
//		if (9 == i / 10)
//		{
//			sum++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n\n");
//	printf("%d\n", sum);
//	return 0;
//}

////�����������
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	while (scanf("%d%d", &a, &b)!=EOF)
//	{
//		printf("%d ", a/b);
//		printf("%d\n", a%b);
//	}
//
//	return 0;
//}

//���������Լ��:ָ����������������Լ��������һ��
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		for (i = a - 1; i > 1; i--)
//		{
//			if (a % i == 0)
//			{
//				if (b % i == 0)
//				{
//					printf("%d\n", i);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}

//3�ı���
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (0==i % 3)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

////��ӡ������ͨ���꣺1.��4�ı����ģ��Ҳ���100�ı���  2.������������ģ�������400�ı���
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0)||i % 400 == 0 )
//			printf("%d ", i);
//	}
//	return 0;
//}


//������һ������1����Ȼ��������1���������⣬���ܱ�������Ȼ������
//��ӡ100~200֮�������

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if ( j == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{

		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if ( j == i)
			printf("%d ", i);
	}
	return 0;
}