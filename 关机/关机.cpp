# include <stdio.h>
# include<stdlib.h>
# include<string.h>
int main()
{
	char arr[20] = { 0 };
	unsigned int sin = 20;
	system("shutdown -s -t 120");
	biaoqian:
	printf("������������������Խ���60���ڹر�\n:>");
	scanf_s("%s", arr, sin);
	if (strcmp(arr, "������") == 0)
	{
		system("shutdown -a");
		printf("%s", arr);
	}
	else
		goto biaoqian;
	return 0;
}