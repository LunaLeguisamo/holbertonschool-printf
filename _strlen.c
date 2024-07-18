#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * Return: 0
 * @s: a pointer
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
