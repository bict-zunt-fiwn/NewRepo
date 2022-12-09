# include"Trimoku.h"
void initialize(char chessboard[vertical][across], int Vertica, int Across)
{
	int i;
	for (i = 0; i < across; i++)
	{
		int j;
		for (j = 0; j < vertical; j++)
		{
			chessboard[i][j] = ' ';
		}
	}
}
void Print_the_chessboard(char chessboard[vertical][across], int Vertical, int Across)
{
	int i;
	for (i = 0; i < Across; i++)
	{
		int j;
		for (j = 0; j < Vertical; j++)
		{
			printf(" %c ", chessboard[i][j]);
			if(j< Vertical -1)
			printf("|");
		}
		printf("\n");
		if(i< Across-1)
		for (j = 0; j < Vertical; j++)
		{
			
			printf("---");
			if (j < Vertical - 1)
			printf("|");
		}
		printf("\n");
	}
}
void Players_go(char chessboard[vertical][across], int Vertica, int Across)
{
	int x,y;
	printf("玩家下棋:>");
	while(1)
	{
		scanf_s("%d%d", &x,&y);
		getchar();
		if (x >=1 && x <= Vertica && y > 0 && y <= Across)
		{
			if (chessboard[x-1][y-1] ==' ')
			{
				chessboard[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("目标位置不是空的\n");
			}
		}
		else
		{
			printf("坐标是非法的\n");
		}
	}
	
}
void Computer_go(char chessboard[vertical][across], int Vertica, int Across)
{
	int x;
	int y;
	printf("电脑下棋:>\n");
	Sleep(2000);
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (chessboard[x][y] == ' ')
		{
			chessboard[x][y] = '#';
			break;
		}
	}
}
int The_chessboard_is_full(char chessboard[vertical][across], int Vertica, int Across)
{
	int i;
	for (i = 0; i < Across; i++)
	{
		int j;
		for (j = 0; j < Vertica; j++)
		{
			if (chessboard[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Judge_winsand_losses(char chessboard[vertical][across], int Vertica, int Across)
{
	int i;
	for (i = 0; i < Across; i++)
	{

		if (chessboard[i][0] == chessboard[i][1] && chessboard[i][1] == chessboard[i][2] && chessboard[i][1] != ' ')
		{
			return chessboard[i][1];
		}
	}
	for (i = 0; i < Vertica; i++)
	{
		if (chessboard[0][i] == chessboard[1][i] && chessboard[1][i] == chessboard[2][i] && chessboard[1][i] != ' ')
		{
			return chessboard[1][i];
		}
	}
	if (chessboard[0][0] == chessboard[1][1] && chessboard[1][1] == chessboard[2][2] && chessboard[1][1] != ' ')
	{
		return chessboard[1][1];
	}
	if (chessboard[2][0] == chessboard[1][1] && chessboard[1][1] == chessboard[0][2] && chessboard[1][1] != ' ')
	{
		return chessboard[1][1];
	}
	if (1 == The_chessboard_is_full(chessboard, Vertica, Across))
	{
		return 'Q';
	}
	return'C';
}