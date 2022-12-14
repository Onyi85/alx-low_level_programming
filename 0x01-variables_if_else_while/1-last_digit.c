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
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*
	*set the last digit for n to a
	*/
	a = n % 10;
	/*
	 * check if a is bigger than 5
	 */
	if (a > 5)
		/*
		 * if true: display this message
		 */
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	/*
	 * check if a is 0
	 */
	else if (a == 0)
		/*
		*Display if true
		*/
		printf("Last digit of %d is %d and is 0\n", n, a);
	/*
	 * otherwise it is something else
	 */
	else
		/*
		* if true: display this message
		*/
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
n, a);

	return (0);
}
