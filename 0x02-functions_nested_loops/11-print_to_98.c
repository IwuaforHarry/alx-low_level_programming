#include "main.h"
#include<stdio.h>
/**
* print_to_98 - function to print all natural numbers from 0 to 9
* @n: numbers to be printed
* Return: return 0 when succesful
*/

void print_to_98(int n)
{
	for (n = 0; n < 99; n++)
		printf("%d, ", n);
}
