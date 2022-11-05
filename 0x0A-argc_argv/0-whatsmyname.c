#include "main.h"
#include <stdio.h>

/**
 * main - Prints the program file name
 * @argc: parameter
 * @argv: array
 *
 * Return: 0 always (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
