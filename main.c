#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    int len3;
    int len4;
    int len5;
    int len6;
    int len7;
    int len8;
    int len9;
    int len10;

    (void)len7;
    (void)len7;
    (void)len8;
        (void)len9;
	(void)len10;
    (void)len5;
    (void)len6;
    (void)len3;
    (void)len4;



	len7 = _printf("%");
	printf("--------------------------\n");
	len8 = printf("%");
	
	printf("\n");

	printf("--------------------------\n");
	len = _printf("%!\n");
	len2 = printf("%!\n");
	printf("--------------------------\n");


    printf("len de _printf = %d\n", len);
    printf("en de printf = %d\n", len2);
	len9 = _printf("%!\n");
	len10 = printf("%!\n");
    len6 = printf("%%%\n");
    len5 = _printf("%%%\n");
    len4 = _printf("Complete the sentence: You (null) nothing, Jon Snow.\n");
    len3 = printf("Complete the sentence: You (null) nothing, Jon Snow.\n");
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
   

	_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	printf("\n");
	_printf("%d\n", 10000);
	printf("%d\n", 10000);

    return (0);
}
