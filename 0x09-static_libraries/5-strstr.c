#include "main.h"
/**
 * _strstr - finds the substring needle in the string haystack
 * @haystack: the main C string to be scanned
 * @needle: the small string to be searched in haystack string
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}
