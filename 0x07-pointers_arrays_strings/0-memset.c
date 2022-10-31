#include "main.h"

/**
 * _memset - fills the memory with constant byte
 * @s: the pointer
 * @b: the buffer
 * @n: number of bytes
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0, i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
