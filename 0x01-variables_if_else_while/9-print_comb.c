#include<stdio.h>
/**
 * main -a program that prints all possible combo of two digits
 *
 * Return: return 0 once successful
*/

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
