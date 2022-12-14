//# include<stdio.h>
//int my_strlen(char* arr)
//{
//	int st=0;
//	while (*arr != '\0')
//	{
//		st++;
//		arr++;
//	}
//	return st;
//}
//void pove(char* arr)
//{
//	char w;		
//	int sz = my_strlen(arr)-1;		
//	w = arr[0];		
//	arr[0] = arr[sz];		
//	arr[sz] = '\0';		
//	if(my_strlen(arr)>=2)		
//	pove(arr+1);
//	arr[sz] = w;
//}
//void pove2(char arr[], int r,int l)
//{
//	int w;
//	w = arr[r];
//	arr[r] = arr[l];
//	arr[l] = w;
//	if (r+1<l-1)
//		pove2(arr, r+1,l-1);
//}
//int main()
//{
//	char arr[] = { "fedcba" };
//	pove(arr);
//	printf("arr=%s\n", arr);
//
//
//	char arr2[] = { "fedcba" };
//	int l = my_strlen(arr) - 1;
//	int r = 0;
//	pove2(arr2, r, l);
//	printf("arr2=%s\n", arr2);
//	return 0;
//}