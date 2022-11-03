#include "main.h"

/**
 * str_checker - checks if two strings are the same
 * @s1: string
 * @s2: string
 * @i: left index
 * @j: right index
 *
 * Return: 1 if palidrome, otherwise 0
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - compares s1 and s2 returns if the strings are identical
 * @s1: string
 * @s2: string
 *
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
