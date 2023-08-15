#include "main.h"
/**
 * _abs - function that computes the absolute
 * value of a number.
 * @n: number to be checked for its absolute value
 * Return: returns the absolute value of a number
 */
int _abs(int n)
{
	if (n >= 0)
		n = n + 0;
	else
		n = -n;
	return (n);
}
