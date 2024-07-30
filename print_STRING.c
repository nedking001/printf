#include "main.h"
/**
 * print_STRING - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_STRING(va_list val)
{
	char *st;
	int i, length = 0;
	int result;

	st = va_arg(val, char *);
	if (st == NULL)
		st = "(null)";
	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] < 32 || st[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			result = st[i];
			if (result < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEXA_plus(result);
		}
		else
		{
			_putchar(st[i]);
			length++;
		}
	}
	return (length);
}
