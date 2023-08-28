#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints
 * the sum of the two diagonals of a square matrix of integers
 * @a: matrix need to be added
 * @size: size of matrix
 * Return: returns nothing as void mentioned
 */
void print_diagsums(int *a, int size)
{
	int i, m1, m2;

	m1 = m2 = 0;
	for (i = 0; i < size; i++)
	{
		m1 = m1 + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		m2 = m2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", m1, m2);
}
