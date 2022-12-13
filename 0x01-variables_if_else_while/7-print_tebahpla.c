#include<stdio.h>
/**
 * main - a program that prints alphabets backwards
 *
 * Return: return 0 when successful
*/

int main(void)
{
	char a;

	a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
