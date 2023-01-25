//#define _CRT_SECURE_NO_WARNINGS 1
//# include<stdio.h>
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		// 0 1  2 3 4 5 6 
//		//12 10 8 6 4 2 0
//		int j;
//		for (j = 0; j <(2*k-2)-i*2; j++)
//		{
//			printf(" ");
//		}
//		//1 3 5 7 9 11 13
//		for (j = 0; j <2*(i+1)-1 ; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < k - 1; i++)
//	{
//		int j;
//		for (j = 0; j <(i+1)*2; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <(k*2-1)- (i + 1) * 2; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}