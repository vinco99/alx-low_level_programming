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
	printf("%d\n", argc - 1);

	return (0);
}
