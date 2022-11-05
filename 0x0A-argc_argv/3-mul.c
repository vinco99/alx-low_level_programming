#include "main.h"
#include "stdlib.h"
#include <stdio.h>

/**
 * main - multiplies two parameters
 * @argc: parameter
 * @argv: array
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);

	return (0);
}
