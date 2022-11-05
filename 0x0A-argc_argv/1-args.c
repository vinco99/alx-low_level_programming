#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: parameter
 * @argv: array
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}

	return (0);
}
