#include "main.h"
/**
 * print_times_table - function to print time table
 * @n: number of times
 * Return: nothing
 */
void print_times_table(int n)
{
	int p, q, r;

	if (n > 0 && n <= 15)
	{
		for (p = 0; p <= n; p++)
		{
			for (q = 0; q <= n; q++)
			{
				r = p * q;
				if (q == 0)
					_putchar(r + '0');
				else if (r < 10 && q != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r >= 10 && r <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
				}
				else if (r >= 100 && r <= 999)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((r / 10) / 10 + '0');
					_putcar((r / 10) % 10 + '0');
					_putchar(r % 10 + '0');
				}
			}
			_putchar(10);
		}
	}
}
