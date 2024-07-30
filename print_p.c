#include "main.h"

/**
 * print_p - prints a pointer address.
 * @val: arguments.
 * Return: integer.
 */
int print_p(va_list val)
{
	void *p;
	char *st = "(nil)";
	long int x;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; st[i] != '\0'; i++)
		{
			_putchar(st[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hexa_plus(x);
	return (b + 2);
}
