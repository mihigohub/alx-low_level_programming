#include "main.h"
/**
 * _puts - print string on std output
 *
 * @str: pointer variable for char data
 *
 * Return: void
 */
void _puts(char *str)
{
	int pstr;

	for (pstr = 0; str[pstr] != '\0'; pstr++)
		_putchar(str[pstr]);
	_putchar(10);
}
