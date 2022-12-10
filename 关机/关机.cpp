# include <stdio.h>
# include<stdlib.h>
# include<string.h>
int main()
{
	char arr[20] = { 0 };
	unsigned int sin = 20;
	//电脑将在120秒内关机
	system("shutdown -s -t 120");
	biaoqian:
	printf("请输入我是猪，否则电脑将在60秒内关闭\n:>");
	scanf_s("%s", arr, sin);
	if (strcmp(arr, "我是猪") == 0)
	{
		//取消关机
		system("shutdown -a");
		printf("%s", arr);
	}
	else
		goto biaoqian;
	return 0;
}
