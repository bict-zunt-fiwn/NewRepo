# include"Trimoku.h"
void Prepare_the_interface()
{
	printf("*******************\n");
	printf("***1.开始 0.退出***\n");
	printf("*******************\n");
	printf("请选择\n");
}
void Start_the_screen()
{
	char sw;
	srand((unsigned int)time(NULL));
	char chessboard[vertical][across] = { 0 };
	initialize(chessboard, vertical, across);
	Print_the_chessboard(chessboard, vertical, across);
	while (1)
	{
		Players_go(chessboard, vertical, across);
		Print_the_chessboard(chessboard, vertical, across);
		sw=Judge_winsand_losses(chessboard, vertical, across);
		if (sw != 'C')
		{
			break;
		}
		Computer_go(chessboard, vertical, across);
		Print_the_chessboard(chessboard, vertical, across);
		sw = Judge_winsand_losses(chessboard, vertical, across);
		if (sw != 'C')
		{
			break;
		}
	}
	switch (sw)
	{
	case '#':
		printf("电脑赢了\n");
		break;
	case '*':
		printf("玩家赢了\n");
		break;
	case 'Q':
		printf("平局\n");
		break;
	}
}
int main()
{
	int Whether_to_start;
	do
	{
		Prepare_the_interface();
		scanf_s("%d", &Whether_to_start);
		getchar();
		switch (Whether_to_start)
		{
		case 1:
			system("CLS");
			printf("开始游戏\n");
			Start_the_screen();
			break;
		case 0:
			system("CLS");
			printf("退出程序\n");
			break;
		default:
			system("CLS");
			printf("输入错误\n");
			break;
		}
	} while (Whether_to_start);
	return 0;
}