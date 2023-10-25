#include "main.h"

/**
 * prime_a - calaculate if its a prime
 * @a: input
 * @b: divsor
 * Return: 0
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - returns 1 if input integer is a prime number & otherwise 0
 * @n: parameter 1
 * Return: prime number or 0
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
