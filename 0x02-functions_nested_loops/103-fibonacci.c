#include <stdio.h>
#include "main.h"
/**
 * main - checks and calculate the sum of even
 * fibonacci numbers under 4000000
 * Return: - void
 */
int main(void)
{
	unsigned int a, b, c, n, sum;

	a = 1;
	b = 2;
	sum = 0;
	for (n = 0; a <= 4000000; n++)
	{
		if (a % 2 == 0)
			sum = sum + a;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%u\n", sum);
	return (0);
}
