#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- This is where code starts
 * @void:means no argument
 * Return: zero
 */
int main(void)
{
	/* define n of type int */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* checks if n is bigger than zero*/
	if (n > 0)
		/*
		 * prints the message if condition is true
		 */
		printf("%d is positive\n", n);
	/*checks if n is zero*/
	else if (n == 0)
}
