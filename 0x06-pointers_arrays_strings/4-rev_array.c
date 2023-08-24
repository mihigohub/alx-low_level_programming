#include "main.h"
/**
 * reverse_array - function that reverses
 * the content of an array of integers
 * @a: integer array
 * @n: number of elements to reverse
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; n / 2 < j; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}
