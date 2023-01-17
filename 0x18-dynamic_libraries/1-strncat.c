#include "main.h"

/**
 * _strncat - Appends string src to dest
 * @dest: the first string
 * @src: the secind string
 * @n: the number of bytes
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';

	return (dest);
}
