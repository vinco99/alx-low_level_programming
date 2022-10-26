#include "main.h"

/**
 * reverse_array - Reverses arry of numbers
 * @a: the array of numbers
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
