#include<stdio.h>
/**
* main -a C program that prints the size of various types
*
* Return: return (0) is succesful
*/
int main(void)
{
	char A_Char;
	int B_Int;
	long int C_LInt;
	long long int DInt;
	float F_Float;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(A_Char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(B_Int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(C_LInt));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(DInt));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(F_Float));
	return (0);
}
