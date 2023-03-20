#include <stdio.h>

/**
 * main - prints various type size on the computer
 * Return: if succesful return to 0
 */

int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
