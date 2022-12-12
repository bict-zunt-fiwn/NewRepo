//# include<stdio.h>
//int move(int n)
//{
//	if (n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return move(n - 1) + move(n - 2);
//	}
//}
//int move2(int n)
//{
//	int x=1;
//	int y=1;
//	int z=1;
//	while (n > 2)
//	{
//		z = x + y;
//		x = y;
//		y = z;
//		n--;
//	}
//	return z;
//}
//int main()
//{
//	int a;
//	int b;
//	int c;
//	scanf_s("%d", &a);
//	b=move(a);		//递归算法
//	printf("第%d个斐波那契数为%d\n", a, b);
//	c = move2(a);		//函数算法
//	printf("第%d个斐波那契数为%d\n", a, c);
//	return 0;
//}