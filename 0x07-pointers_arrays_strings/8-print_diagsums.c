#include "main.h"

/**
 * print_diagsums - Prints the sum of diagonal of a matrix
 * @a: the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, p, s;

	p = 0;
	s = 0;

	for (i = 0; i < size; i++)
	{
		p += [i][i];
		s += [i][size - i - 1];
	}
	printf("%i, %i\n", p, s);
}
