#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring
 * @haystack: the string
 * @needle: the second string
 *
 * Return: char.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
