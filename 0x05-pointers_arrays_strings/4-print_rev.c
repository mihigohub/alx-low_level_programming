#include "main.h"
#include <string.h>
/**
 * print_rev - function to print in reverse
 *
 * @s: pointer variable for type char
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	i = strlen(s);

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar(10);
}
