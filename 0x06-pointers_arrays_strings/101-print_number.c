#include "main.h"
/**
 * print_number - function to print integer
 * @n: integer to be printed
 * Return: returns void
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
