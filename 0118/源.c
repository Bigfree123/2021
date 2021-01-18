#define _CRT_SECURE_NO_WARNINGS 1

////三个数按照从大到小输出
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

//求1-100之间数字9出现的次数
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

////求除数和余数
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

//两数的最大公约数:指两个或多个整数共有约数中最大的一个
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

//3的倍数
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

////打印闰年普通闰年：1.是4的倍数的，且不是100的倍数  2.年份是整百数的，必须是400的倍数
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


//素数：一个大于1的自然数，除了1和它本身外，不能被其他自然数整除
//打印100~200之间的素数

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

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

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