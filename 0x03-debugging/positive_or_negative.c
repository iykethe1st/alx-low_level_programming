#include <stdlib.h>
#include <stdio.h>
/* positive_or_negative - returns an integer
 *
 * @n: Integer to be returned 
 *
 * Return: The integer followed by the sign (in words)
 */ 

void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is positive", n);
	printf("\n");
}
