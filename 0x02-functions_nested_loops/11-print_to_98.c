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
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		for (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}

}
