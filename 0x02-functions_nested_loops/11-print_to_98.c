#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - function that prints all
 * natural numbers n to 98
 * @n: natural number n
 * Return: nothing to return as void
 */
void print_to_98(int n)
{
	int check;

	if (n > 98)
	{
		for (check = n; check >= 98; check--)
		{
			printf("%d", check);
			if (check != 98)
				printf(", ");
		}
		putchar(10);
	}
	else
	{
		for (check = n; check <= 98; check++)
		{
			printf("%d", check);
			if (check != 98)
				printf(", ");
		}
		putchar(10);
	}
}
