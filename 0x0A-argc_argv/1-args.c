#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments that will pass to the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: always zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
