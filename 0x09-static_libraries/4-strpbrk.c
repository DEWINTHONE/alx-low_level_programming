#include "main.h"
/**
 * _strpbrk - finds the 1st char of 1st string and matches it to the 2nd string
 * @s: this is the C string to be scanned
 * @accept: this is the C string containing the characters to match
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

	return ('\0');
}
