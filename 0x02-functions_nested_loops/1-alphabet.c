/*
 * this program prints alphabet lowercase
 * followed by a new line
 */
#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
* print_alphabet - this display letters in lowercase
* @void: means function has no argument
* Return: zero
*/
void print_alphabet(void)
{
	/*
	 * Declare our loop counter
	 * and our placeholder
	 */
	char ch;
	char lower_case;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		lower_case = tolower(ch);
		_putchar(lower_case);
	}
	_putchar('\n');
}

