#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(Success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
