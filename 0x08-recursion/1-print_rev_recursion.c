#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string that will be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int p = strlen(s) - 1;

	char *q;

	if (p == 0)
	{
		_putchar(*s);
		_putchar(10);
		return;
	}
	else
	{
		q = &(*(s + p));
		_putchar(*q);
	}
	p = p - 1;
}

