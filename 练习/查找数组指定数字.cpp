//# include<stdio.h>
//void move(int* arr ,int x,int y)
//{
//	int q = 0;
//	int r = y;
//	while (q <= r)
//	{
//		int mix = (q + r) / 2;
//		if (x >arr[mix])
//		{
//			q = mix + 1;
//		}
//		else if (x < arr[mix])
//		{
//			r = mix - 1;
//		}
//		else if (x == arr[mix])
//		{
//			printf("%d的下标为%d\n", x, mix);
//			break;
//		}
//	}
//	if(q>r)
//	printf("找不到");
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int n = 7;
//	int m = (sizeof(arr) / sizeof(arr[0]))-1;
//	move(arr,n,m);
//}