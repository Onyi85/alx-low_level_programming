/*
 * this program prints a lowercase alphabets
 * in reverse
 */
#include<stdio.h>
/**
 * main- Entry code
 * @void- means main takes no argument
 * Return: zero
 */
int main(void)
{
	/*
	 * declare our loop variable
	 */
	char ch;
	
	/*
	 * loop
	 */
	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	/*
	 * print newline
	 */
	putchar('\n');
	return (0);
}
