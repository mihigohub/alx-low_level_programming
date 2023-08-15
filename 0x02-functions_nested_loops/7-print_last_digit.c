#include "main.h"
/**
 * print_last_digit - function that prints the last
 * digit of a number
 * @n: the number to provide its last digit
 * Return: returns the last digit of a number
 */
int print_last_digit(int n)
{
	int m, q, r;

	if (n >= 0)
	{
		m = n % 10;
		q = (m * 10) + m;
	}
	else
	{
		r = -n;
		m = r % 10;
		q = (r * 10) + m;
	}
	return (q);
}
