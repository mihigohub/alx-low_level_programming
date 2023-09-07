#include <stdio.h>
#include "main.h"

/**
 * main - it prints the name of the progam
 * @argc: The number of arguments
 * @argv: the array of arguments
 * Return: always zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
