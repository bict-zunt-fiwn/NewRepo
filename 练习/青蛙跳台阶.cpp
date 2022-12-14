//# include<stdio.h>
//int  move(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else if (n > 2)
//	{
//		return move(n - 1) + move(n - 2);
//	}
//}
//int move2(int n)
//{
//	int x = 1;
//	int y = 2;
//	int z = 1;
//	if (n == 2)
//	{
//		z = 2;
//	}
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
//	int n;
//	int b;
//	int c;
//	scanf_s("%d", &n);
//	b=move(n);		//递归方法
//	printf("%d个台阶有%d个跳法\n", n, b);
//	c = move2(n);		//循环方法
//	printf("%d个台阶有%d个跳法\n", n, c);
//	return 0;
//}