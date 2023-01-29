#define _CRT_SECURE_NO_WARNINGS 1
//# include<stdio.h>
//int main()
//{
//	int a[3][4] = { {0,1,2,3},{4,5,6,7},{8,9,10,11} };
//	int(*p)[4] = (int (*)[4]) & a[1][1];
//	printf("%d\n", p[-1][1]);
//}
//# include<stdio.h>
//int main()
//{
//    int a = (int)53.14;
//    printf("%d", a % 10);
//    return 0;
//}
//# include<stdio.h>
//int main()
//{
//    int a, b;
//    int c;
//    scanf("%d %d", &a, &b);
//    c = a + b;
//    while (c > 7)
//        c -= 7;
//    printf("%d", c);
//    return 0;
//}
//# include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    printf("%d %d %d", a /3600,(a % 3600)/60, (a % 3600) % 60);
//    printf("\n");
//    printf("%d %d %d", a / 60 / 60, a / 60 % 60, a % 60);
//    //3660 1 1 0 
//       return 0;
//}
//# include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    printf("%d", 1 << a);
//    return 0;
//}
//# include<stdio.h>
//int main()
//{
//    int a = 200;
//    long long b = 31560000;
//    long long c = a * b;
//    printf("%lld", c);
//    return 0;
//}
//# include<stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[20] = { 0 };
//    int i;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[n]);
//    }
//    return 0;
//}
//# include<stdio.h>
//int main()
//{
//    int n = 0;
//    float arr[20] = { 0 };
//    int i;
//    float max = 0.0, mix = 100.0, mex = 0.0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//    }
//        for (i = 0; i < n; i++)
//        {
//            if (mix > arr[i])
//                mix = arr[i];
//        }
//        for (i = 0; i < n; i++)
//        {
//            mex += arr[i];
//        }
//        printf("%.2f %.2f %.2f", max, mix, mex / n);
//        return 0;
// }
//    
//#include<stdio.h>	//标准输入输出头文件
//#include<math.h>	//需用数学公式sqrt【平方根计算】
//void main()
//{
//	float a, b, c, p;	//边长和面积可为小数
//	double S;
//	printf("请输入三边长度:\n");	//每次输入以Enter键结束
//	scanf("%f %f %f", &a, &b, &c);	//输入变量
//	if (a + b > c && b + c > a && a + c > b)		//判断任意两边之和是否大于第三边
//	{
//		p = (a + b + c) / 2;
//		S = sqrt(p * (p - a) * (p - b) * (p - c));	//sqrt开平方，计算面积
//		printf("此三角形面积为:%7.2f\n", S);		//宽度为7，其中.2表示小数点后保留2位
//	}
//	else
//	{
//		printf("您输入的三边不构成三角形!\n");
//	}
//}
//# include<stdio.h>
//int main()
//{
//    int n, h, m;
//    scanf("%d %d %d", &n, &h, &m);
//    if (m <= n * h)
//    {
//        n = n - m / h;
//        if (m % h != 0)
//            n--;
//    }
//    else
//    {
//        n = 0;
//    }
//    printf("%d", n);
//    return 0;
//}
//# include<stdio.h>
//int main()
//{
//    float f;
//    scanf("%f", &f);
//    float c = (5 / 9.0) * (f - 32);
//    printf("%.3f", c);
//    return 0;
//}