#include "main.h"
#include <string.h>
/**
 * print_rev_recursion - function that prints a string in reverse
 * @s: string that will be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int p = strlen(s);

	if (p == 0)
	{
		return;
	}
	p--;
	_putchar(*(s + (p - 1)));
	_print_rev_recursion(s + (p - 1));
}

