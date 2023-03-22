#include "main."

/**
 * _isalpha - to check for alphabet
 * @c: parameter ro be checked
 * Return: 1 it finds an alphabet otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
