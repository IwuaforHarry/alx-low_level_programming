#include<stdio.h>
/**
 * main -a program that prints alphabets with exceptions
 *
 * Return: return 0 when successful
*/

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if ((a != 'q' && a != 'e') && a <= 'z')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
