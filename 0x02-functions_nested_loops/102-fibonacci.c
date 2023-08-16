#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: void
 */
int main(void)
{
	unsigned int a, b, c, n;

	a = 1;
	b = 2;
	for (n = 0; n < 50; n++)
	{
		printf("%lu", a);
		if (n != 49)
			printf(", ");
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
