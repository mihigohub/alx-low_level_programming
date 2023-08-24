#include "main.h"
/**
 * string_toupper - change to uppercase
 * @s: string to be converted
 * Return: returns the converted string
 */
char *string_toupper(char *s)
{
	int i = 0;
	while (s[i++])
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] -= 32;
	}
	return (s);
}
