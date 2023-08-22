#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: pointer variable
 * Return: void
 */
void rev_string(char *s)
{
	int i, u;

	i = strlen(s) - 1;
	for (u = i; u >= 0; u--)
		_putchar(s[u]);
	_putchar(10);
}
