#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int _strlen(char *s)
{
  int lent;

  for (lent = 0; s[lent] != '\0'; lent++)
  {
  }
  return (lent);
}

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
        i++;
      }
      else
        w = write(1, &format[i], 1);
        
      count = count + w;
      i++;
    }
  printf("%d", count);
  return count;
}

