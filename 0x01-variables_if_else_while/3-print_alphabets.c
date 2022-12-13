#include<stdio.h>
/**
 * main -A program to print letters in upper and lower case
 *
 * Return: return 0 once succesfful
*/

int main(void)
{
	char a;

	char b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
