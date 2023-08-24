#include "main.h"
/**
 * _strcmp - function that compares two strings
 * according to their lenght
 * @s1: string one
 * @s2: string two
 *
 * Return: return > 0 if s1 > s2,and
 * return < 0 if s1 < s2 and
 * finally return 0 if both string are equal
 */
int _strcmp(char *s1, char *s2)
{
	int differ;

	for (differ = 0; s1[differ] == s2[differ]; differ++)
	{
		if (s1[differ] == '\0' && s1[differ] == '\0')
			return (0);
		return (s1[differ] - s2[differ]);
	}
}
