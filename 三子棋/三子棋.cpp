# include"Trimoku.h"
void Prepare_the_interface()
{
	printf("*******************\n");
	printf("***1.��ʼ 0.�˳�***\n");
	printf("*******************\n");
	printf("��ѡ��\n");
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
		printf("����Ӯ��\n");
		break;
	case '*':
		printf("���Ӯ��\n");
		break;
	case 'Q':
		printf("ƽ��\n");
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
			printf("��ʼ��Ϸ\n");
			Start_the_screen();
			break;
		case 0:
			system("CLS");
			printf("�˳�����\n");
			break;
		default:
			system("CLS");
			printf("�������\n");
			break;
		}
	} while (Whether_to_start);
	return 0;
}