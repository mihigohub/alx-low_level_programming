#include "main.h"
/**
 * more_numbers - check code for largest number
 *
 * Return: Void
 */
void more_numbers(void)
{
	int n, m, p, q;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m > 9)
			{
				p = m / 10;
				_putchar('0' + p);
			}
			q = m % 10;
			_putchar('0' + q);
		}
		_putchar(10);
	}
}
