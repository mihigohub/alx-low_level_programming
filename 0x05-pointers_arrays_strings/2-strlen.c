#include "main.h"
/**
 * _strlen - function that measure the lenght
 * of the string
 * @s: pointer variable
 * Return: returns the lenght of string
 */
int _strlen(char *s)
{
	int str, count;

	count = 0;
	for (str = 0; s[str] != '\0'; str++)
		count++;
	return (count);
}
