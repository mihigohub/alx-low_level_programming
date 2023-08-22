#include "main.h"
/**
 * puts2 - print some of character from
 * a string
 * @str: string variable
 * Return: void
 */
void puts2(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (n % 2 == 0)
			_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
