#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 *
 */

int main(void)
{
	char lower = 'a';

	while(lower <= 'z')
	{
	    putchar(lower);
	    lower++;   
	}

	putchar('\n');
	
	return (0);
}
