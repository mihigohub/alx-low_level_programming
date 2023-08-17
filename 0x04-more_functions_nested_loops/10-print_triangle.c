#include "main.h"
/**
 * print_triangle - print triangle
 * @size: dimension of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, n, m;

	if (size == 0 || size < 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (n = 1; n < (size - i); n++)
				_putchar(' ');
			for (m = 0; m <= i; m++)
				_putchar('#');
			_putchar(10);
		}
	}
}
