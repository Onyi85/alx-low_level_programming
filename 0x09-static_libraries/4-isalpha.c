/* This program checks for character*/
#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isalpha-checks for letter
 * characters and return 1 or 0
 * @c:function takes one argument
 * Return: zero
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
	_putchar('\n');
}
