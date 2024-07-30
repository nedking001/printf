#include "main.h"
/**
 * print_R13 - convert to rot13
 * @args: printf arguments
 * Return: counter
 *
 */
int print_R13(va_list args)
{
	int i, j, ton = 0;
	int k = 0;
	char *str = va_arg(args, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				ton++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			ton++;
		}
	}
	return (ton);
}
