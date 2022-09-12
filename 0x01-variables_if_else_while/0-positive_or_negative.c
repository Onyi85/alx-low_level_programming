/*this is about possitive and nagative*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main-this is where our code begins
 *@void-this shows that our main has no arguments
 *Return: zero
*/
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*
	*check if n is bigger than zero
	*/
	if (n > 0)
	/*
	*print the message if condition is true
	*/
		printf("%d is positive\n", n);
	/*
	*check if n is zero
	*/
	else if (n == 0)
	/*
	*prints if codition is true
	*/
		printf("%d is zero\n", n);
	/*
	*check if n is zero
	*/
	else
		printf("%d is negative\n", n);
	return (0);
}
