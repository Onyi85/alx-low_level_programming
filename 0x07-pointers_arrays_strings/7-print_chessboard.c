/*this program prints a chess board*/
#include <stdio.h>
#include <stdio.h>
/**
 * print_chessboard - This function prints a chess board
 **@a: pointer to matrix array
 **/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
			putchar(*(a[i] + j));
		putchar('\n');
	}
}
