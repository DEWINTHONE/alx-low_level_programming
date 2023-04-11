#include "main.h"
/**
 * _strcmp - compares the string pointed to str1 to the string pointed to by str2
 * @s1: This is the first string to be compared
 * @s2: This is the second string to be compared
 * Return: if Return value = 0 then it indicates str1 is equal to str2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
