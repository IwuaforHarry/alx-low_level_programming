#include "main.h"
/**
 * factorial - Function to return factorial of a number
 * @n: The given number
 * Return: return void once complete or -1 if error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
