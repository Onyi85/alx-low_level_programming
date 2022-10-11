/*
 * this program prints the base ten digits
 * starting from only using putchar
 */
#include<stdio.h>
/**
 * main- this is where our code start
 * @void- this means main has no arguments
 * Return: zero
 */
int main(void)
{
	/*
	 * define a new int named ch
	 */
	int  ch;

	/*
	 * loop
	 */
	for (ch = 0; ch <= 9; ch++)
		putchar(ch + '0');
	putchar('\n');

	return (0);
}
