//#define _CRT_SECURE_NO_WARNINGS 1
//# include<stdio.h>
//int move(int arr[3][5], int* i, int* j, int k)
//{
//	while (*j >= 0 && *i <= 3)
//	{
//		if (arr[*i][*j] > k)
//		{
//			(*j)--;
//		}
//		else if (arr[*i][*j] < k)
//		{
//			(*i)++;
//		}
//		else
//		{
//			return 1;
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { {0,1,2,3,4},{5,6,7,8,9},{10,11,12,13,14} };
//	int k;
//	int i = 0;
//	int j = 4;
//	scanf("%d", &k);
//	int n=move(arr, &i, &j, k);
//	if (n == 1)
//		printf("找到了,下标为:%d %d",i+1,j+1);
//	else if(n==0)
//		printf("找不到");
//	return 0;
//}