/* this function prints every other array of character */
#include "main.h"
#include<stdio.h>
/**
 * puts2- prints every other character of an array
 * @str: pointer to a char
 */
void puts2(char *str)
{
	int i;

	i = 2;
	if (str == NULL)
		return;
	while (*str != '\0')
	{
		_putchar(*str);
		str += i;
	}
	_putchar('\n');
}
