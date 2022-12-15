#include "main.h"
/**
 * times_table -to print multiplication table of number nine
*/

void times_table(void)
{
	int num;
	int count;
	int mul;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');
	for (count = 1; count < 10; count++)
	{
		_putchar(',');
		_putchar(' ');

		mul = num * count;
		if (mul < 10)
			_putchar(' ');
		else
			_putchar((mul / 10) + '0');
		_putchar((mul % 10) + '0');
	}
	_putchar('\n');
	}
}
