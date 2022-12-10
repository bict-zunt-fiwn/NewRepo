//# include<stdio.h>
//# include<math.h>
//int move(int n)
//{
//	int i;
//	if (n < 2)
//	{
//		return 0;
//	}
//	else
//	{
//		for (i = 2; i <=sqrt(n); i++)
//		{
//			if ((n % i) == 0)
//			{
//				return 0;
//			}
//		}
//		return 1;
//	}
//}
//int main()
//{
//	int a;
//	int b;
//	for (a = 101; a <200; a+=2)
//	{
//		b = move(a);
//		if (b == 1)
//		{
//			printf("%dÊÇËØÊý\n", a);
//		}
//	}
//	return 0;
//}