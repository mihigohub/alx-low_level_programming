#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string that will be checked for its length
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return(1 + _strlen_recursion(s + 1));
}
/**
 * before_palindrome - function that check for palindrome
 * @s: string pointer
 * initial: starting index of pointer
 * last: last index in pointer
 */
int before_palindrome(char *s, int initial, int last)
{
	if (initial >= last)
		return (1);
	else if (s[initial] != s[_strlen_recursion(s) - 1])
		return (0);
	return (before_palindrome(s, initial + 1, last - 1));
}
/**
 * is_palindrome - function that check of the string is palindrome
 * palindrometic mean a string which still have the originality when reversed
 * @s: pointer to string that will be checked
 * Return: returns 1 if the string is palindrom otherwise 0
 */
int is_palindrome(char *s)
{
	if (_strlen_recursion(s) <= 1)
		return (1);
	return (before_palindrome(s, 0, _strlen_recursion(s) - 1));
}
