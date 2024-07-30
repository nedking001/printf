#include "main.h"

/**
 * _putchar - function that prints the char c to output
 * @c: Character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
