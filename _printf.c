#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - Function that prints
 * @format: A list
 * Return: Counter, the len of all
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0, w = 0;
	char c;
	char *str;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(args, int);
					w = write(1, &c, 1);
					break;
				case 's':
					str = va_arg(args, char *);
					w = write(1, str, _strlen(str));
					break;
				case '%':
					w = write(1, &format[i], 1);
					break;
			}
			if (format[i + 2] == '%')
			{
				write(1, &format[i], 1);
				i++;
			}
			i++;
		}
		else
			w = write(1, &format[i], 1);
		if (format[i] == 0)
			w = write(1, "(null)", _strlen("(null)"));
		count = count + w;
		i++;
	}
	return (count);
}
