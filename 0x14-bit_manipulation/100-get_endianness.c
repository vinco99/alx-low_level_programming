#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endianne or 1 if small
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
