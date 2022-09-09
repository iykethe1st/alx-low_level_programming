#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("The size of a char: %i bytes(s)\n", sizeof(char));
	printf("The size of an int: %i bytes(s)\n", sizeof(int));
	printf("The size of a float: %i bytes(s)\n", sizeof(float));
	printf("The size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("The size of long long int: %i bytes(s)\n", sizeof(long long int));
	return (0);
}
