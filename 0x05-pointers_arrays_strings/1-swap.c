#include "main.h"
/**
 * swap_int - function to swap variables
 *
 * @a: First pointer variable
 * @b: second pointer variable of type integer
 *
 * Return: void(nothing)
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
