#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(Success)
 *
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}
