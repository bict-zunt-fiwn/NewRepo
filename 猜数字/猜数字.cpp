#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void Start_the_screen()
{
	printf("********************\n");
	printf("*******猜数字*******\n");
	printf("********************\n");
}
void Guess_the_numbers()
{
	int rde;
	int in;
	srand((unsigned int)time(NULL));
	rde = rand() % 100 + 1;
	while (1)
	{
		printf("请输入数字:>");
		scanf_s("%d", &in);
		getchar();
		if (in > rde)
		{
			printf("大了\n");
		}
		else if (in < rde)
		{
			printf("小了\n");
		}
		else
		{
			printf("输入正确\n");
			break;
		}
	}
}
int main()
{
	int s;
	int a;
	do
	{
		Start_the_screen();
		printf("1:开始 0：结束\n");
		scanf_s("%d", &s);
		getchar();
		switch (s)
		{
		case 1:
			system("CLS");
			Guess_the_numbers();
			printf("\n");
			break;
		case 0:
			system("CLS");
			printf("退出游戏\n");
			break;
		default:
			system("CLS");
			printf("输入错误\n");
			printf("\n");
			break;
		}
	} while (s);
	return 0;
}
