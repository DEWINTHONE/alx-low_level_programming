#include "main.h"

/**
 * print_number - pints the numbers 0 through 9
 * Return: always 0.
 */

void print_number(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
