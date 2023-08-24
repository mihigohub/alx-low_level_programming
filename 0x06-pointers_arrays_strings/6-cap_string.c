#include "main.h"
/**
 * cap_string - function to capitalize
 * words of string
 * @s: string to checked and capitalized
 * Return: returns capitalized string
 */
char *cap_string(char *s)
{
	char sep[] = " \t\n,;.!?\"(){}";
	
	int i;

	int j, k;

	for (i = 0, k = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			k = 1;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
				k = 1;
		}
		if (k)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				k = 0;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
				k = 0;
			else if (s[i] >= 0 && s[i] <= 9)
				k = 0;
		}
	}
	return (s);
}
