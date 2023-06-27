#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;
	char *s;

	va_start(args, format);
	
	while (*format)
	{
		if (*format == '%');
	}
	format++;

