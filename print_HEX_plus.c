#include "main.h"

/**
 * print_HEXA_plus - prints an hexadecimal number.
 * @num: number to print.
 * Return: counter.
 */
int print_HEXA_plus(unsigned int num)
{
	int i;
	int *map;
	int ton = 0;
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
			map[i] = map[i] + 7;
		_putchar(map[i] + '0');
	}
	free(map);
	return (ton);
}
