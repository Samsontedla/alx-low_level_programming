#include "holberton.h"
/**
 *isPrime - check n is prime recursing with decrement of 1
 *@n: integer n
 *@i: decrement from n
 *Return: 0 if no remainder else 1
 */
int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrime(n, i - 1));
}
/**
 * is_prime_number - function that returns 1 if n is a prime number
 *@n: input integer
 *Return: 1 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (isPrime(n, n - 1));
}

