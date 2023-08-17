#include "main.h"
/**
 * _isupper - function that checks for upper letter
 * @c: letter to be checked
 * Return: returns 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
