#include "main.h"

/**
 * print_chessboard - Prints Chessboard
 * @a: Pointer array
 */
void print_chessboard(char (*a)[8])
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < j; k++)
		{
			if (a[k] != ' ')
			{
				_putchar(a[i][j]);
			}
		}

		_putchar('\n');
	}
}
