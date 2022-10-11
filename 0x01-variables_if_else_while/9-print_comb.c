/*
 * this program prints all combination of base
 * ten numbers
 */
#include<stdio.h>
/**
 * main- Entry point
 * @void- means main 'funct' has no arguments
 * Return: zero
 */
int main(void)
{
	/*
	 * declare our loop variable
	 */
	int ch;

	/*
	 * loop
	 */
	for (ch = 0; ch <= 9; ch++)
	{
		/*
		 * print each ch in the loop
		 */
		putchar(ch + '0');
		/*
		 * check if condition is true
		 */ 

		if (ch <= 8)
		{
			/*
			 * print comma and space
			 */
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
