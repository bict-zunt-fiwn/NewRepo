//#define _CRT_SECURE_NO_WARNINGS 1
//# include<stdio.h>
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i=0;
//	int j = sz - 1;
//	while(i < j)
//	{
//		while (i <= j)
//		{
//			if (arr[i] % 2 == 1)
//			{
//				i++;
//				continue;
//			}
//			break;
//		}
//		while (j >= i)
//		{
//			if (arr[j] % 2 == 0)
//			{
//				j--;
//				continue;
//			}
//			break;
//		}
//		if (i < j)
//		{
//			int atm = arr[i];
//			arr[i] = arr[j];
//			arr[j] = atm;
//		}
//	}
//	for(i=0;i<sz;i++)
//	printf("%d ", arr[i]);
//	return 0;
//}