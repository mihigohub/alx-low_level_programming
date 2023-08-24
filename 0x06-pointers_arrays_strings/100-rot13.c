#include "main.h"
/**
 * rot13 - encode string with rotate by 13 places
 * @s: string to be encoded
 * Return: returns encoded string
 */
char *rot13(char *s)
{
	char fisp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char lasp[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lasp[j] != '\0'; j++)
		{
			if (s[i] == lasp[j])
			{
				s[i] = fisp[j];
				break;
			}
		}
	}
	return (s);
}
