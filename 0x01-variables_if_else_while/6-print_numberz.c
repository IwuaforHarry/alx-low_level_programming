#include<stdio.h>
/**
 * main - to print single digits of base 10
 *
 * Return: return 0 after execution
*/

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
