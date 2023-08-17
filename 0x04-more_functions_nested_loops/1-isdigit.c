#include "main.h"
/**
 * _isdigit - check for digit
 * @c: Entered digit to be checked
 * Return: return 1 or 0 for yes or no
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
