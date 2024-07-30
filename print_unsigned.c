#include "main.h"
/**
 * print_unsigned - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_unsigned(va_list args)
{
	unsigned int p = va_arg(args, unsigned int);
	int num, map = p % 10, digit, exp = 1;
	int  i = 1;

	p = p / 10;
	num = p;

	if (map < 0)
	{
		_putchar('-');
		num = -num;
		p = -p;
		map = -map;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = p;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(map + '0');

	return (i);
}
