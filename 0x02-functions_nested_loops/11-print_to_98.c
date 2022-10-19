#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print numbers sn to 98
 * @n: Parameter number
 */
void print_to_98(int n)
{

	int x;

	if (n >= 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (x = n; x < 98; x++)
		{
			printf("%d", x);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}

}
