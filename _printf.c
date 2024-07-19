#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _printf - Function that prints
 * @format: A list
 * Return: Counter, the len of all
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}


int _printint(int n) {
  long i = 0;
  int count = 0;

  if (n == 0) {
    return (_putchar('0'));
  }
  if (n < 0)
  {
    count += _putchar('-');
    n = -n;
  }
  for (i = 1; i < n; i *= 10) {
  }
    i /= 10;

  for (; i >= 1; i /= 10) {
    count += _putchar(n / i % 10 + '0');
    }
  return (count);
}

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0, w = 0;
	char c;
	char *str;
	int len;

	va_start(args, format);
	len = strlen(format);
	while (i < len)
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
					if (str == NULL)
					{
						w = write(1, "(null)", 6);
					}
					else
					{
						w = write(1, str, strlen(str));
					}
					break;
				case '%':
						w = write(1, &format[i], 1);
					break;
				case '\0':
					w = -1;
					break;
				case 'd':
					w = _printint(va_arg(args, int));
					break;
				case 'i':
					w = _printint(va_arg(args, int));
					break;
				default:
					w = write(1, &format[i], 2);
					break;
			}
			i += 2;
		}
			else
			{
				w = write(1, &format[i], 1);
				i++;
			}
			count += w;
	}
	va_end(args);
	return (count);
}
