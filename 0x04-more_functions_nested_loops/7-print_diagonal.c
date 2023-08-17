#include "main.h"
/**
 * print_diagonal - printing diagonal line
 * @n: parameter
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int m, q;

	if (n == 0 || n < 0)
	{
		_putchar(10);
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (q = 0; q < m; q++)
				_putchar(' ');
			_putchar('\\');
			_putchar(10);
		}
	}
}
