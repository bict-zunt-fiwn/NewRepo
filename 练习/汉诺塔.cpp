//# include<stdio.h>
//void move(char x, char y)
//{
//	printf("%c->%c\n", x, y);
//}
//void hanio(int n, char A, char B, char C)
//{
//	if (n == 1)
//	{
//		move(A, C);
//	}
//	else
//	{
//		hanio(n - 1, A, C, B);
//		move(A, C);
//		hanio(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	hanio(n, 'A', 'B', 'C');
//	return 0;
//}