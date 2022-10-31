/* this program print the sign of a number*/
#include <unistd.h>
#include "main.h"
#include <ctype.h>
/**
 * print_sign- print a single character
 * to the screen or stdout
 * @n: takes a character argument
 * Return: the character
 */
int print_sign(int n)
{
	int numz;

	if (n > 0)
	{
		numz = 1;

		_putchar('+');
	}
	else if (n == 0)
	{
		numz = 0;
		_putchar('0');
	}
	else
	{
		numz = -1;
		_putchar('-');
	}
	return (numz);
}
