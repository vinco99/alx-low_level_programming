#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - lenght of string
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copy arrays
 * @dest: destination
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest = '\0';
	return (dest);
}
/**
 * _strdup - Returns pointer to the newly alocated memory space
 * @str: char
 * Return: char *
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	string = (char *) malloc(size * sizeof(char));
	if (string == 0)
	{
		return (NULL);
	}
	_strcpy(string, str);
	return (string);
}
