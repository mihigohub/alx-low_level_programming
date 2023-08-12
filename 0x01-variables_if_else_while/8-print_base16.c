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

	char ch;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
