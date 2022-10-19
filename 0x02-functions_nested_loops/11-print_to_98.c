#include "main.h"

/**
 * print_to_98 - Print numbers sn to 98
 * @n: Parameter number
 */
void print_to_98(int n)
{

	int x;
	
	if (n > 98)
	{
		for(x = n; x >= 98; x--)
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (x = n; x <= 98; x++)
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
	}

}
