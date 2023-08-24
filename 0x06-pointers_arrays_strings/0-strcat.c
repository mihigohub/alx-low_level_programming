#include "main.h"
/**
 * _strcat - function that concatenate two strings
 * @dest: destination file
 * @src: source file to be concatenate to dest file
 *
 * Return: returns dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int dest_n, src_n;

	dest_n = src_n = 0;
	while (dest[src_n++])
		dest_n++;
	for (src_n = 0; src[src_n]; src_n++)
		dest[dest_n++] = src[src_n];
	return (dest);
}
