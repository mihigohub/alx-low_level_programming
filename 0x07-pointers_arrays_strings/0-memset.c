#include "main.h"
/**
 * _memset - function that fills the first n bytes
 *  of the memory areas pointed to by s with
 *  the constant byte b
 *  @s: pointer string
 *  @b:variable of type char
 *  @n: variable of type unsigned
 *  Return: returns pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
