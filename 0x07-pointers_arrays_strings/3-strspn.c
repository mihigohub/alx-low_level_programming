#include "main.h"
/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: initial segment
 * @accept: accept variable
 * Return: returns the number of bytes in the
 * initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;

	unsigned int bte;

	bte = 0;
	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
			{
				bte++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (bte);
		}
		s++;
	}
	return (bte);
}
