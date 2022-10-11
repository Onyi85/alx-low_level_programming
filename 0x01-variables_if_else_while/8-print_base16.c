/*
 * this program prints all numbers to base 16,
 * in lowercase
 */
#include<stdio.h>
/**
 * main- this is where our code begins
 * @void- means function main takes
 * no arguments
 * Return: zero
 */
int main(void)
{
	/*
	 * define our counter and char holder
	 */
	char i;
	char ch;

	/*
	 * loop
	 */
	for (i = '0'; i <= 9; i++)
		putchar(i);
		/*
		 * another loop
		 */
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	/*
	 * display newline
	 */
	putchar('\n');
	return (0);
}
