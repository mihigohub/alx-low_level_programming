#include "main.h"
/**
 * print_number - print number
 * @n: integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int i, hold;

	if (n < 0)
	{
		hold = -n;
		_putchar('-');
	}
	else
		hold = n;
	if (hold / 10)
		print_number(hold / 10);
	i = hold % 10;
	_putchar(i + '0');
}
