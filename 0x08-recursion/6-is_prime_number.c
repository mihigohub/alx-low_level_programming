#include "main.h"
/**
 * is_prime_number - function that check if the input number is a prime
 * @n: input number
 * Return: returns 1 for true otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (before_prime(n, 2));
}
/**
 * before_prime - function that check the prime number
 * @number: first integer
 * @prime: second integer
 * Return: returns 1 if the first integer is prime otherwise 0
 */
int before_prime(int number, int prime)
{
	if (number == 2)
		return (1);
	else if (number == 0 || number % prime == 0 || number == 1 || number == -1)
		return (0);
	else if (prime * prime > number)
		return (1);
	return (before_prime(number, (prime + 1)));
}
