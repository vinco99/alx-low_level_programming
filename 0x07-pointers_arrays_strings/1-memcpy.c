#include "main.h"

/**
 * _memcpy - Copies to a memory area
 * @dest: memory area
 * @src: the string
 * @n: number of char
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
