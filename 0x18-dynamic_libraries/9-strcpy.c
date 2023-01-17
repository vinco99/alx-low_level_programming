#include "main.h"

/**
 * _strcpy - copies the string pointed to src
 * @dest: the destination of the copied string
 * @src: the string
 *
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + j) = *(src + j);
		j++;
	}

	*(dest + j) = '\0';

	return (dest);
}
