//# include<stdio.h>
//void move(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)		
//	{
//		int flog = 1;
//		int j;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int m;
//				m = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = m;
//				flog = 0;
//			}
//		}  
//		if (flog == 1)
//		{
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int i=0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", arr[i]);
//		
//	}
//}