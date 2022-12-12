//# include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int km;
//	scanf_s("%d %d", &a,&b);
//	//计算两个数二进制不同的位，并存储到km
//	km = a ^ b;
//	int count = 0;
//	//计算km二进制1的个数
//	while (km)
//	{
//		count++;
//		km = km & (km - 1);
//	}
//	printf("%d ", count);
//	return 0;
//}