#include <stdio.h>
/**
 * main - main entry point
 * Return: void
 */
int main(void)
{
	unsigned long int a, b, c, n;

	a = 1;
	b = 2;
	for (n = 0; n < 99; n++)
	{
		printf("%lu", a);
		if (n != 98)
			printf(", ");
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
