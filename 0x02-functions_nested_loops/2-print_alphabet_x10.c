#include "main.h"
/**
 * print_alphabet_x10 - function to print the alphabets
 * in lowercase, in 10 times.
 * Return: void
 */
void print_alphabet_x10(void)
{
	char A;

	int n;

	for (n = 0; n < 10; n++)
	{
		for (A = 'a'; A <= 'z'; A++)
			_putchar(A);
		_putchar(10);
	}
}
