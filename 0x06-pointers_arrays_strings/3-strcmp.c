#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings
 * according to their lenght
 * @s1: string one
 * @s2: string two
 * Return: return > 0 if s1 > s2,and
 * return < 0 if s1 < s2 and
 * finally return 0 if both string are equal
 */
int _strcmp(char *s1, char *s2)
{
	int str1, str2;

	str1 = strlen(s1);
	str2 = strlen(s2);
	if (str1 == str2)
		return (0);
	return (str1 - str2);
}
