#include "main.h"

/**
 * print_b - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_b(va_list val)
{
	int map = 0;
	int ton = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int q;

	for (i = 0; i < 32; i++)
	{
		q = ((a << (31 - i)) & num);
		if (q >> (31 - i))
			map = 1;
		if (map)
		{
			b = q >> (31 - i);
			_putchar(b + 48);
			ton++;
		}
	}
	if (ton == 0)
	{
		ton++;
		_putchar('0');
	}
	return (ton);
}
