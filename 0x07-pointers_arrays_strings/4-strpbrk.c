#include "main.h"
/**
 * _strpbrk - function that seraches
 * a stringfor any of  aset of bytes
 * @s: string to be viewed
 * @accept: string to be searched in
 * Return: returns a pointer to the byte in s that
 * matches one of the byte sin accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (accept[a] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
