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
	/*
	*set the last digit for n to k
	*/
	k = n % 10;
	/*
	 * check if k is bigger than 5
	 */
	if (k > 5)
		/*
		 * if true: display this message
		 */
		printf("last digit of %d is %d and is greater than 5\n", n, k);
	/*
	 * check if k is 0
	 */
	else if (k == 0)
		/*
		*Display if true
		*/
		printf("last digit of %d is %d and is 0\n", n, k);
	/*
	 * otherwise it is something else
	 */
	else
		/*
		* if true: display this message
		*/
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, k);

	return (0);
}
