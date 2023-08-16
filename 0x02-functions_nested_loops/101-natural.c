#include "main.h"
#include <stdio.h>
/**
 * main - Entry point for every program
 * Return: always zero (success)
 */
int main(void)
{
	int n, sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);
}
