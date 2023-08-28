#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination to memory area
 * @src: source tomemory area
 * @n: number of bytes
 * Return: returns pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
