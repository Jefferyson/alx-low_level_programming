#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Return: int
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);

	return (result);
}
