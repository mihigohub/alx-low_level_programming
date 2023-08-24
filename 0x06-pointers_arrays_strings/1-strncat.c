#include "main.h"
/**
 * _strncat - funcation that perfoms task
 * of concatenates two strings with n bytes from src
 * @dest: file to hold concatenated string
 * @src: file to be concatenated
 * @n: number of characters to be concatenated
 * Return: returns dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int p, q;

	for (p = 0; p < n && src[p] != '\0'; p++)
		dest[p] = src[p];
	for ( ; q < n; q++)
		dest[q] = '\0';
	return (dest);
}
