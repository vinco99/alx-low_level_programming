#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{

		for (y = 0; y < 10; y++)
		{
			z = x * y;

			_puchar(z % 10 + '0');

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
