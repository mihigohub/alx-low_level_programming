#include "main.h"
#include <string.h>
/**
 * puts_half - print second half
 * of a string
 * @str: pointer variable
 * Return: void
 */
void puts_half(char *str)
{
	int i, u, v, n;

	u = strlen(str);
	n = (u - 1) / 2;
	v = u / 2;
	if (u % 2 == 0)
	{
		for (i = v; i < u; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = n; i < u; i++)
			_putchar(str[i]);
	}
	_putchar(10);
}
