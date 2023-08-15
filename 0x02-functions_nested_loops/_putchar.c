#include <unistd.h>
/**
 * _putchar - function to print characters
 * @c: inserted char
 * Return: return only single char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
