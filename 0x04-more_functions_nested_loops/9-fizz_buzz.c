#include <stdio.h>
/**
 * main - check code
 * Return: void
 */
int main(void)
{
	int n = 1;

	while (n < 101)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n == 100 && n % 3 == 0)
			printf("Fizz");
		else if (n == 100 && n % 5 == 0)
			printf("Buzz");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", n);
		n++;
	}
	printf("\n");
	return (0);
}
