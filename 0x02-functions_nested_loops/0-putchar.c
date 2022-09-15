/*this is about a program that print _putchar*/
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/**
 * main - Entry point
 * @void: means function has no argument
 * Return: 0
 */
int main(void)
{
	int i;
	char ch[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	for (i = 0; i < 9; i++)
		_putchar(ch[i]);
	return (0);
}
