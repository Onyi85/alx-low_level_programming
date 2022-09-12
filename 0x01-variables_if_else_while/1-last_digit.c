/*this is about last digit*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-this is where our code begins
 *@void-this shows that our main has no arguments
 *Return:zero
*/
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 5)
		/*
		*Display this message if the condition is true
		*/
		printf("last digit of %d is %d and is greater than 5\n", n, k);
	else if (k == 0)
		/*
		*Display if true
		*/
		printf("last digit of %d is %d and is 0\n", n, k);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, k);
		/*
		*Display if true
		*
	return (0);
}
