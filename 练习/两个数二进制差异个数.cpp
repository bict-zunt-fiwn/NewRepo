//# include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int km;
//	scanf_s("%d %d", &a,&b);
//	//���������������Ʋ�ͬ��λ�����洢��km
//	km = a ^ b;
//	int count = 0;
//	//����km������1�ĸ���
//	while (km)
//	{
//		count++;
//		km = km & (km - 1);
//	}
//	printf("%d ", count);
//	return 0;
//}