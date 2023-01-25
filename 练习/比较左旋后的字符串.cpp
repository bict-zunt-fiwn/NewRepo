//#define _CRT_SECURE_NO_WARNINGS 1
//# include<stdio.h>
//# include<string>
//int move(char  arr1[],char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//	strncat(arr1, arr1, len1);
//	char* ch=strstr(arr1, arr2);
//	if (ch == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = { "abcedfg" };
//	char arr2[30] = { "abc" };
//	int n =move(arr1,arr2);
//	if (n == 1)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}