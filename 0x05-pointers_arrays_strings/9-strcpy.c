#include "main.h"
/**
 * _strcpy - copying elements
 * @dest: destination of content
 * @src: source of content
 * Return: Returns destination
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (*(src + n) != '\0')
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = '\0';
	return (dest);
}
