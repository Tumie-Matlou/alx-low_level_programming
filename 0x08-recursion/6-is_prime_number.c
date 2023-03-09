#include "main.h"

/**
 * _prime - recursively divide by higher divisor,
 * skip even numbers
 * @n: the number
 * @divisor: divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int _prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (_prime(n, divisor + 1));

}

/**
 * is_prime_number - check if integer is prime number
 * @n: the number
 * Return: 1 if prime, 0 if otherwise
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (_prime(n, divisor));
}
