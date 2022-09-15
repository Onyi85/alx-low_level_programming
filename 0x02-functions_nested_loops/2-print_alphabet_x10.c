/*
 * this function print the alphabet in
 * lowercase,followed by a new line
 */
#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * print_alphabet_x10-this display letters in lowercase
 * @void: means it take no argument
 * Return: zero
 */
void print_alphabet_x10(void)
{
	/*
	 * Declare our local variables
	 */
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'A'; ch <= 'Z'; ch++)
		{
			char lower_case = tolower(ch);

			_putchar(lower_case);
		}
			_putchar('\n');

	}
}
