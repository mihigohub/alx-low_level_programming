#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(Success)
 *
 */
int main(void)
{
	char l, u;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar(10);
	return (0);
}
