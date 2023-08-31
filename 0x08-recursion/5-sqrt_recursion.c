#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: a given natural number
 * Return: return the square root of a nutural number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (before_root(n, 0));
}
int before_root(int number, int root)
{
	if ((root * root) > number)
		return (-1);
	else if ((root * root) == number)
		return (root);
	return (before_root(number, (root + 1)));
}
