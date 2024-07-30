#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*func)();
} convert;

int *_strcpy(char *dest, char *src);
int print_p(va_list val);
int print_unsigned(va_list args);
int print_hexa_plus(unsigned long int num);
int _strlenc(const char *s);
int print_HEXA_plus(unsigned int num);
int print_HEXA(va_list val);
int print_hexa(va_list val);
int print_octal(va_list val);
int print_b(va_list val);
int print_reverse_str(va_list args);
int print_STRING(va_list val);
int print_R13(va_list args);
int print_i(va_list args);
int print_d(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print_perc(void);
int print_c(va_list val);
int print_s(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
