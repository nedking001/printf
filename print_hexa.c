#include "main.h"

/**
 * print_hexa - prints an hexgecimal number.
 * @val: arguments.
 * Return: ton.
 */
int print_hexa(va_list val)
{
	int i;
	int *map;
	int ton = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		ton++;
	}
	ton++;
	map = malloc(ton * sizeof(int));

	for (i = 0; i < ton; i++)
	{
		map[i] = temp % 16;
		temp /= 16;
	}
	for (i = ton - 1; i >= 0; i--)
	{
		if (map[i] > 9)
			map[i] = map[i] + 39;
		_putchar(map[i] + '0');
	}
	free(map);
	return (ton);
}
