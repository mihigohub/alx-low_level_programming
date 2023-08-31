#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: String that will be checked for its length
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
