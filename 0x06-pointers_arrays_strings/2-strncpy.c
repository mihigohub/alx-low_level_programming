#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: file that holds copied string
 * @src: string to be copied
 * @n: numbers of byte to be checked
 * Return: returns dest file
 */
char *_strncpy(char *dest, char *src, int n)
{
        int p, q;

	for (p = 0; p < n && src[p] != '\0'; p++)
		dest[p] = src[p];
	for (; q < n; q++)
		dest[q] = '\0';
        return (dest);
}
