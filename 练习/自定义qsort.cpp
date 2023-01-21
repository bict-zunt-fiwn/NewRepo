#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
struct sss
{
	int a;
	char ch[20];
};
int test(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int test2(const void* e1, const void* e2)
{
	return ((struct sss *)e1)->a - ((struct sss *)e2)->a;
}
void my_sort(char* e1, char* e2, int num)
{

	int i;
	for (i = 0; i < num; i++)
	{
		char tap = *(e1 + i);
		*(e1 + i) = *(e2 + i);
		*(e2 + i) = tap;
		/*char tap = *e1;
		*e1 = *e2;
		*e2 = tap;
		e1++;
		e2++;*/
	}
}
void my_qsort(void* arr, int sz, int num, int(*p)(const void* e1, const void* e2))
{
	int i;
	for (i = 0; i < sz-1; i++)
	{
		int j;
		int k = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if(p((char*)arr + (j * num), (char*)arr +(( j + 1) * num))>=0)
			{
				my_sort((char*)arr + (j * num), (char*)arr + ((j + 1) * num), num);
				k = 1;
			}
		}
		if (k == 0)
		{
			break;
		}
	}
}
int main()
{
	struct sss arr2[5]= { {12,"zhangsan"},{15,"lisi"},{13,"wangwu"},{45,"chaoliu"},{34,"liuqi"} };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	my_qsort(arr2, sz2, sizeof(arr2[0]), test2);
	int i = 0;
	for (i = 0; i < sz2; i++)
	{
		printf("%d ", arr2[i].a);
	}
	printf("\n");

	int arr[] = { 9,8,7,6,5,4,3,2,1,0,-1 };
	//int arr[] = { 0,1,2,3,4, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, sz, sizeof(arr[0]), test);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}