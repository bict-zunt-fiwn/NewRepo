#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test(int(*p)[5], int x, int y)
{
	int i;
	for (i = 0; i < x; i++)
	{
		int j;
		for (j = 0; j < y; j++)
		{
			printf("%d ", **(p+i)+j);
			printf("%d ", (*(p + i))[j]);
			printf("%d ", *(p[i])+j);
			printf("%d ", (p[i])[j]);
		}
		printf("\n");
	}
}
void Print(const char* str)
{
	printf("%s\n", str);
}
int main()
{
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* p[5] = { &a,&b,&c };//指针数组
	//int i;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d\n", *   p[i]);	//解引用
	//}
	//printf("-------------------\n");
	//int* (*p2)[5] = &p;			//数组指针
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d\n", *   (*p2)    [i]);
	//}
	//printf("-------------------\n");
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d\n",  *    *(*p2+i));
	//}
	
	





	//int arr[] = {10,20,30};		    //整型数组
	//int (*p1)[3] = &arr;	   //数组指针
	//int (*p2[1])[3] = {p1};		//指针数组
	//printf("%d\n", *(*(p2[0])+1));
	//printf("%d\n", (*(p2[0]))[1]);










	/*int arr[] = { 1,4,3 };
	int(*p)[3] = &arr;
	printf("%d\n",(*p)[0]);
	printf("%d\n", *(*p+1));*/



	//int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//test(arr,3,5);


	/*const char* p1[5] = { "s你是大帅比","s嘿害! ","s鸡汤别来","keep going","s栓Q了" };
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", *(p1+i));
	}
	printf("\n");
	char arr[5] = { "swdd" };
	char* p = arr;
	printf("%s\n",arr);
	printf("%s\n", p);*/

	/*void (*p) (const char*) = Print;
	(*p)("hello bit");*/


	














































	return 0;

	
}