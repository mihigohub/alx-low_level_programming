#include "main.h"
/**
 * _isalpha - checks for parameter if is an alphabet
 * @c: parameter to be passed in
 * Return: returns 1 for yes otherwise 0
 */
int _isalpha(int c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}
