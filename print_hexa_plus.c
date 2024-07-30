#include "main.h"

/**
 * print_hexa_plus - prints an hexdecimal number.
 * @num: arguments.
 * Return: ton.
 */
int print_hexa_plus(unsigned long int num)
{
	long int i;
	long int *map;
	long int ton = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		ton++;
	}
	ton++;
	map = malloc(ton * sizeof(long int));

	for (i = 0; i < ton; i++)
	{
		map[i] = temp % 16;
		temp = temp / 16;
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
