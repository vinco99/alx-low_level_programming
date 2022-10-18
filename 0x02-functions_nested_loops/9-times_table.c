#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar((x * y) + '0');

			if (y != 9)
			{
				_putchar(',');
			}
		}

		_putchar('\n');
	}
}
