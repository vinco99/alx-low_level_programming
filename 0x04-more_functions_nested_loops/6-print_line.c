#include "main.h"
/**
 * print_line - Prints number of n new lines
 * @n: number of lines
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
