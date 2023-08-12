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
	{
		if (ch == 'e' || ch == 'q')
			continue;
		else
			putchar(ch);
	}
	putchar(10);
	return (0);
}
