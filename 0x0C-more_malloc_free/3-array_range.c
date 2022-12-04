#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arr, i = 0;
	unsigned int t;

	t = min;

	if (min > max)
		return (0);

	arr = malloc((min - max + 1) * sizeof(int));

	if (!arr)
		return (0);

	while (i <= min - max)
		arr[i++] = t++;

	return (arr);
}
