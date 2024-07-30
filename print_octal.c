#include "main.h"

/**
 * print_octal - prints an octal number.
 * @val: arguments.
 * Return: ton.
 */
int print_octal(va_list val)
{
	int i;
	int *map;
	int ton = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		ton++;
	}
	ton++;
	map = malloc(ton * sizeof(int));

	for (i = 0; i < ton; i++)
	{
		map[i] = temp % 8;
		temp /= 8;
	}
	for (i = ton - 1; i >= 0; i--)
	{
		_putchar(map[i] + '0');
	}
	free(map);
	return (ton);
}
