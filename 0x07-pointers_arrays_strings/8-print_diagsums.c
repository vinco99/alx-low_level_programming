#include "main.h"

/**
 * print_diagsums - Prints the sum of diagonal of a matrix
 * @a: the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, p, s;

	p = 0;
	s = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + 1;
		p += *(a + k);
	}

	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		s += *(a + k);
	}

	printf("%i, %i\n", p, s);
}
