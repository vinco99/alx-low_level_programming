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
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d", x);
			}
		}

		printf("\n");
	}
	else
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d", x);
			}
		}

		printf("\n");
	}

}
