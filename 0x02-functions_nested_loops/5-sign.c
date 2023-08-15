#include <stdio.h>
/**
 * print_sign - function that prints the sign of a number
 * @n: a number that must be passed in function
 * Return: return values 1 if n greater than 0
 * returns 0 if n equal to zero and returns
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
		_putchar(45);
	return (-1);
}
