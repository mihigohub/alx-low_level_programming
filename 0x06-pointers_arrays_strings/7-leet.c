#include "main.h"
/**
 * leet - replace letters with correspoinding digit
 * @s: string intake
 * Return: return replaced string
 */
char *leet(char *s)
{
	char *letter = "aAeEoOtTlL";

	char *numbers = "4433007711";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letter[j])
				s[i] = numbers[j];
		}
	}
	return (s);
}
