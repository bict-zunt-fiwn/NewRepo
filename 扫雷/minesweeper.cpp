# include"minesweeper.h"
void initialize(char Formal_parameters[Across][Vertical], int Formal_parameters2, int Formal_parameters3, char Formal_parameters4)
{
	int i;
	for (i = 0; i < Formal_parameters2; i++)
	{
		int j;
		for (j = 0; j < Formal_parameters3; j++)
		{
			Formal_parameters[i][j] = Formal_parameters4;
		}
	}
}
void Lay_mines(char Formal_parameters[Across][Vertical], int Formal_parameters2, int Formal_parameters3)
{
	int tese = Thunder_number;
	while (tese)
	{
		int x = (rand() % 9) + 1;
		int y = (rand() % 9) + 1;
		if (Formal_parameters[x][y] == '0')
		{
			Formal_parameters[x][y] = '1';
			tese--;
		}
	}
}
void Print_the_interface(char Formal_parameters[Across][Vertical], int Formal_parameters2, int Formal_parameters3)
{
	int i;
	for (i = 0; i <= Formal_parameters2; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= Formal_parameters2; i++)
	{
		printf("%d ", i);
		int j;
		for ( j = 1; j <= Formal_parameters3; j++)
		{
			printf("%c ",Formal_parameters[i][j]);
		}
		printf("\n");
	}
}
int judgment(char input[Across][Vertical], int x,int y)
{
	   return input[x][y - 1] +
		      input[x + 1][y - 1] +
			  input[x + 1][y] +
			  input[x + 1][y + 1] +
			  input[x][y + 1] +
			  input[x - 1][y + 1] +
			  input[x - 1][y] +
			  input[x - 1][y - 1] - (8 * '0');
}
void scan(char input[Across][Vertical], char output[Across][Vertical], int arr1, int arr2)
{
	int x;
	int y;
	int tese = (across * vertical) - Thunder_number;
	while (tese)
	{
		printf("������:>");
		scanf_s("%d%d", &x, &y);
		getchar();
		if (x >= 1 && x <= arr1 && y >= 1 && y <= arr2)
		{
			if (input[x][y] == '0')
			{
				int z = judgment(input,x,y);
				if (z == 0)
				{
					output[x][y] = ' ';
				}
				else
					output[x][y] = z + '0';
				Print_the_interface(output, arr1, arr2);
				tese--;
			}
			else
			{
				printf("���ź����㱻ը����\n");
				break;
			}
		}
		else
		{
			printf("�����ǷǷ���\n");
		}
	}
	if (tese == 0)
	{
		printf("��ϲ����Ӯ��\n");
	}
}
void Start_the_game()
{
	char input[Across][Vertical] = { 0 };
	char output[Across][Vertical] = { 0 };
	//��ʼ��
	initialize(input, Across, Vertical, '0');
	initialize(output, Across, Vertical, '*');
	//����
	Lay_mines(input, across, vertical);
	//��ӡ
	Print_the_interface(input, across, vertical);
	
	Print_the_interface(output, across, vertical);
	//��������
	scan(input, output, across, vertical);
}
void Get_ready()
{
	int a;
	srand((unsigned int)time(NULL));
	do
	{
		printf("********************\n");
		printf("***1.��ʼ  0.�˳�***\n");
		printf("********************\n");
		printf("��ѡ��:>");
		scanf_s("%d", &a);
		getchar();
		switch (a)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			Start_the_game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (a);

}