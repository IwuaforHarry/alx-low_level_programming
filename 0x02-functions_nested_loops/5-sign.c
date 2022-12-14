#include "main.h"
/**
 * main -program that prints different signs
 *
 * Return: return 1, 0 or -1 signs accordingly
*/

int main(void)
{
	int n;

	int count;

	n = count;
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
