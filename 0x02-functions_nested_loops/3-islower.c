#include "main.h"
/**
 * _islower - function to check for lowercase alpha
 * @c: parameter to be checked
 * Return: returns value 1 for yes otherwise 0
 */
int _islower(int c)
{
	return (c <= 'z' && c >= 'a');
}
