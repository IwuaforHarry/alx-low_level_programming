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
	long long int D_LLInt;
	float F_Float;

	printf("Char size is: %lu Byte(s)\n", (unsigned long)sizeof(A_Char));
	printf("Int size is: %lu Byte(s)\n", (unsigned long)sizeof(B_Int));
	printf("Long Int size is: %luByte(s)\n", (unsigned long)sizeof(C_LInt));
	printf("Very Long Int size is: %luByte(s)\n", (unsigned long)sizeof(D_LLInt));
	printf("Float size is: %luByte(s)\n", (unsigned long)sizeof(F_Float));
	return (0);
}
