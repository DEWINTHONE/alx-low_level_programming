#include "main.h"
/**
 * _strncpy - copies up to n from the string pointed to, by src to dest
 * @dest: the destination array where the content is to be copied
 * @src: This is the string to be copied
 * @n: The number of characters to be copied from source
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
