//#define _CRT_SECURE_NO_WARNINGS 1
//# include<stdio.h>
//# include<string.h>
//void test(char* ch)
//{
//	int len=strlen(ch);
//	int i;
//	int a = 0;
//	int b = len - 1;
//	for (i = 0; i < len; i += 2)
//	{
//		char tmp = *(ch+a);
//		*(ch+a) = *(ch + b);
//		*(ch + b) = tmp;
//		a++;
//		b--;
//	}
//}
//void test(char ch[])
//{
//	int tap = 0;
//	int len = strlen(ch) - 1;
//	while (tap < len)
//	{
//		char w = ch[tap];
//		ch[tap] = ch[len];
//		ch[len] = w;
//		tap++;
//		len--;
//	}
//}
//int main()
//{
//	char ch[] = { "abcdef" };
//	test(ch);
//	printf("%s\n", ch);
//}
//int main()
//{
//	
//	return 0;
//}

