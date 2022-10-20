#include "main.h"

/**
 * print_square - Prints in number of size quare character
 * @size: Parameter size
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
