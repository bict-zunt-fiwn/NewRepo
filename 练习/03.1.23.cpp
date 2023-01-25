#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
//int main()
//{
//	const char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	const char** cp[] = { c + 3,c + 2,c + 1,c };
//	const char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", *(cpp[-2] - 3));
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//}
//int main()
//{
//	const char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	const char** cp = c;
//	printf("%s\n", *(c + 1));
//
//	int a = 10, b =20, f = 30, d = 40;
//	int* s [] = {&a,&b,&f,&d};
//	int** sp = s;
//	printf("%d\n", **s);
//	return 0;
//}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i <sz ; i++)
	{
		printf("%d ",arr[i + 1]);
	}
	printf("\n ");

	int arr2[3][4] = { {0,1,2,3},{1,2,3,4},{5,6,7,8} };
	for (i = 0; i < 3; i++)
	{
		int j;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr2[i][j+1]);
		}
	}
	printf("\n ");

	int(*p)[10] = &arr;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",(*(*p+i+1)));
	}
	return 0;


}