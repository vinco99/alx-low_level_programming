#include "main.h"
#include <stdio.h>

/**
 * main - prints the whole parameter
 * @argc: parameter
 * @argv: array
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
