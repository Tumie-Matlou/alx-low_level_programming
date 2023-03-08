#include "main.h"

int _find_root(int n, int root);
/**
 * _find_root - finds the square root of number
 * @n: the number
 * @root: trial root
 * Return: natural square root,
 * -1 if otherwise
 */

int _find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (_find_root(n, root + 1));
}

/**
 * _sqrt_recursion - finds natural square root of number
 * @n: the number
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_find_root(n, 0));
}
