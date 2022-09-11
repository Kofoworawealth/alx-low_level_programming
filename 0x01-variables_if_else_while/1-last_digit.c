#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints number as variable
 *
 * Return:Always (successful)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	lastDigit = n % 10;
	printf(last Digit of %i is %i and is ", n, lastDigit);
	if (lastdigit > 5)
		printf("greater than 5\n");
	else if (lastDigit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}


