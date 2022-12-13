#include "main.h"
/**
 * print_alphabet_x10 - To print ten times the alphabets
*/

void print_alphabet_x10(void)
{
	char Harold;

	int Ozi;

	Ozi = 0;
	while (Ozi < 10)
	{
		for (Harold = 'a'; Harold <= 'z'; Harold++)
			_putchar(Harold);
	}
	_putchar('\n');
	Ozi++;
}
