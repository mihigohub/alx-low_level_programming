#include "main.h"
/**
 * print_square - print a shape of square
 * @size: function parameter that
 * determine the lenght of side
 * Return: void
 */
void print_square(int size)
{
	int s, t;

	if (size == 0 || size < 0)
		_putchar(10);
	for (s = 1; s <= size; s++)
	{
		for (t = 1; t <= size; t++)
			_putchar('#');
		_putchar(10);
	}
}
