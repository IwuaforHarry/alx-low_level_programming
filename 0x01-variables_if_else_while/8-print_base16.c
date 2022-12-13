#include<stdio.h>
/**
 * main -to print out hexadecimal numbers
 *
 * Return: return 0 when successful
*/

int main(void)
{
	int a;

	char b;

	b = 'a';
	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{ putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
