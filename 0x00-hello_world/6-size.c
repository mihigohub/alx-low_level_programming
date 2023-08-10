#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char A;

	int B;

	long int C;

	long long int D;

	float E;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(A));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(B));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(C));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(D));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(E));
	return (0);
}
