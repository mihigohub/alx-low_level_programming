#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted
 */
int _atoi(char *s)
{
	int a, b, c, d, len, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	len = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++d;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			c = c * 10 + digit;
			b = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			b = 1;
		}
		a++;
	}
	if (b == 0)
		return (0);
	return (c);
}
/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: success (0), or 1 (error)
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
