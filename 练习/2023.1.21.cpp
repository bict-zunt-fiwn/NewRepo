#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<stdlib.h>
////void test(char arr[], int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int j = 0;
////		int k = 0;
////		for (j = 0; j <sz-1-i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				char m = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = m;
////				k = 1;
////			}
////		}
////		if (k == 0)
////		{
////			break;
////		}
////	}
////}
////int main()
////{
////	/*int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
////	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
////	float arr[] = { 9.5,8.4,7.6,6.2,5.3,4.2,3.6,2.5,1.4,0.6 };*/
////	char arr[] = { 'w','w','f','a'};
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	test(arr, sz);
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		/*printf("%.1f ", arr[i]);
////		printf("%d ", arr[i]);*/
////		printf("%c ", arr[i]);
////	}
////	return 0;
////}
//////int main()
//////{
//////	float a = 5.6;
//////
//////	printf("%d\n", (int)a);
//////}
//////int main()
//////{
//////	int a =30;
//////	int k=0;
//////	while (a)
//////	{
//////		a = a & (a - 1);
//////		k++;
//////	}
//////	/*11110
//////			11101
//////	11100 k==1
//////			11010
//////	11000 k==2
//////			10100
//////	10000 k==3
//////			01000 
//////	00000 k==4*/
//////	printf("%d\n", k);
//////}
////
////
//int test(const void* e1, const void* e2)
//{
//	return *(int*)e1-*(int*)e2;
//}
//int main()
//{
//	int arr[] = { 9,7,8,3,5,4,6,2,1,0,-1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]),test );
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int test(const void* e1, const void* e2)
//{
//	if ((*(float*)e1 - *(float*)e2) == 0)
//	{
//		return 0;
//	}
//	else if ((*(float*)e1 - *(float*)e2) >= 0.01)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//	//return (int)(*(float*)e1 - *(float*)e2);
//
//}
//int main()
//{
//	float arr[] = { 0.2,3.4,5.4,1.5,1.6,4.3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), test);
//	int i;
//	for (i = 0; i < sz; i++)
//		{
//				printf("%f ", arr[i]);
//			}
//	return 0;
//}
//struct at
//{
//	int a;
//	char ch;
//}ct;
//int test(const void* e1, const void* e2)
//{
//	return ((struct at*)e1)->a - ((struct at*)e2)->a;
//}
//int main()
//{
//	ct = { 30,'a' };
//	struct at* p = &ct;
//	//printf("%d ", ct.a);
//	//printf("%d", p->a);
//	struct at a[3] = { {302,'s'},{902,'a'},{100,'f'} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	qsort(a, sz, sizeof(a[0]), test);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c\n",a[i].ch);
//	}
//}
// /*struct sss
//{
//	int a;
// }sd; typedef struct sss f;
//int main()
//{
//	f arr = { 9 };
//	printf("%d\n", arr.a);
//	sd = { 3 };
//	printf("%d\n", sd.a);
//	int arr7[10] = {0};
//	typedef int arr6 [10];
//	arr6 w= { 1 };
//}*/

