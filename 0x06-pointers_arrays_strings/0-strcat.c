#include "main.h"

/**
 * _strcat -  Appends the src string to the dest string
 * @dest: the first string
 * @src: the second string
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}

	dest[i + j] = '\0';

	return (dest);
}
