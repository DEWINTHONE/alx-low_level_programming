#include "main.h"

/**
 * _islower - has to print in lower case
 * @c: papprameter has to be printed
 * Return: if it it is lower case and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
