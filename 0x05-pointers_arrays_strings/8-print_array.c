#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - printing elements of array
 * of integer
 * @a: pointer variable
 * @n: Integer parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int f, b;

	f = n - 1;
	for (b = 0; b < n; b++)
	{
		if (b != f)
		{
			printf("%d", a[b]);
			printf(", ");
		}
		else
			printf("%d", a[b]);
	}
	_putchar(10);
}
