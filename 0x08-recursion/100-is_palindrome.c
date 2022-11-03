#include "main.h"

/**
 * _strlen_recursion - the lenght of string
 * @s: string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_check - check for palindrome
 * @s: string
 * @i: left index
 * @j: right index
 *
 * Return: 1 if palindrome, otherwise 0
 */
int pal_check(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_check(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome -  returns 1 if s is a palindrome and 0 if not
 * @s: string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	return (pal_check(s, 0, _strlen_recursion(s) - 1));
}
