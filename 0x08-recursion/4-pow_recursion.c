#include "main.h"
/**
 * _pow_recursion - Function that returns x value raised to the power of y
 * @x: value to return
 * @y: raised power of x
 * Return: return -1 if error otherwise return x value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
