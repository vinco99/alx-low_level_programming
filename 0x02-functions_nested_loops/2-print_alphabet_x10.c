#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets ten times
 */
void print_alphabet_x10(void)
{

	int x = 1;

	while (x <= 10)
	{
		char alph = 'a';

		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}

		_putchar('\n');
		x++;
	}

}
