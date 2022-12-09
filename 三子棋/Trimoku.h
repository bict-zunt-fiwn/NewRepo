#ifndef	Trimoku
# include<stdio.h>
# include<time.h>
# include<stdlib.h>
# include<windows.h>
# define Trimoku
# define vertical 3
# define across 3
void initialize(char chessboard[vertical][across], int Vertica, int Across);
void Print_the_chessboard(char chessboard[vertical][across], int Vertica, int Across);
void Players_go(char chessboard[vertical][across], int Vertica, int Across);
void Computer_go(char chessboard[vertical][across], int Vertica, int Across);
char Judge_winsand_losses(char chessboard[vertical][across], int Vertica, int Across);
#endif
