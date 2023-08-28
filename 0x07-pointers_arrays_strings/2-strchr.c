#include "main.h"
/**
 * _strchr - function that will locate a
 * character in a string
 * @s: string to be considered
 * @c: character to be checked
 * Return: returns a pointe rthe the first occurence
 * of the character c in the string s or NULL
 * if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	char *b;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			b = (s + a);
		else
			b = "(NULL)";
	}
	return (b);
}
