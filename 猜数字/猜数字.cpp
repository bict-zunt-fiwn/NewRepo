#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void Start_the_screen()
{
	printf("********************\n");
	printf("*******������*******\n");
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
		printf("����������:>");
		scanf_s("%d", &in);
		getchar();
		if (in > rde)
		{
			printf("����\n");
		}
		else if (in < rde)
		{
			printf("С��\n");
		}
		else
		{
			printf("������ȷ\n");
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
		printf("1:��ʼ 0������\n");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			system("CLS");
			printf("�������\n");
			printf("\n");
			break;
		}
	} while (s);
	return 0;
}
