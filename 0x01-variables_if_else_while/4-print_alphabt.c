/*
 * This program prints all letters of the word
 * 'alphabet' except the char 'q' and 'e'
 */
#include <stdio.h>
#include <ctype.h>
/**
 * main-This is where our code begins
 * @void-means our main has no argument
 * Return: zero
 */
int main(void)
{
	/*
	 * Define our char ch
	 */
	char ch;

	/*
	 * our while loop
	 */
	for (ch = 'a'; ch <= 'z'; ch++)
		/*
		 * confir
		 */
		if (ch != 'q' && ch != 'e')
		/*
		* print if true
		*/
	putchar('\n');
	return (0);
}
