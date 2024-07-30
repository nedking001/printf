#include "main.h"

/**
 * print_p - prints a pointer address.
 * @val: arguments.
 * Return: ton.
 */
int print_p(va_list val)
{
	void *p;
	char *st = "(nil)";
	long int a;
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

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('a');
	b = print_hexa_plus(a);
	return (b + 2);
}
