#include "main.h"
/**
 * print_line - check the code and
 * draw a straight line
 * @n: number for lenght of line
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int m;

	if (n == 0 || n < 0)
		_putchar(10);
	else
	{
		for (m = 0; m < n; m++)
			_putchar('_');
		_putchar(10);
	}
}
