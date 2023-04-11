#include "main.h"
/**
 * _strchr - finds the first occurrence of a character in a string
 * @s: this is the C string to be scanned
 * @c: this is the character to be searched in s
 * Return: to the character c or 0 if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
