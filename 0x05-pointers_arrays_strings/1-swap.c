#include "main.h"

/**
 * swap_int - Swaps the value of two intergers
 * @a: the first int
 * @b: the second int
 */
void swap_int(int *a, int *b)
{
	int pa;

	pa = *a;
	*a = *b;
	*b = pa;
}
