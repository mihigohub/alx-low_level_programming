#include "main.h"
/**
 * _puts_recursion - Function that prints a string
 * @s: String that will be printed on the screen
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar(10);
}
