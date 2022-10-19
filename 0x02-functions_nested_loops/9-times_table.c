#include <stdio.h>
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

			if (y != 9)
			{
				if (z <= 9)
				{
					printf("%d,  ", z);
				}
				else
				{
					printf("%d, ", z);
				}
			}
			else
			{
				printf("%d", z);
			}
		}

		printf("\n");
	}
}
