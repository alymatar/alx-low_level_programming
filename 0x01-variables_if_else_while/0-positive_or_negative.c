#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Succcess)
 */
int main (void)
{
	int n;

	srand(time(NULL));
	n=rand() - RAND_MAX() /2;
	if (n>0)
	{
		printf("%d is positive \n",n);
	}
	else if 
	{
		printf("%d is zero\n",n);
	}
	else
	{
		printf("%d is negative\n",n);
	}
	return(0);
}
