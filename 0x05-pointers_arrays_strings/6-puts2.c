/* this function prints every other array of character */
#include "main.h"
#include<stdio.h>
/**
 * puts2- prints every other character of an array
 * @str: pointer to a char
 */
void puts2(char *str)
{
	int i, j, len;

	len = i = j = 0;
	if (str == NULL)
		return;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	for (j = 0; (j < len && str[j] != '\0'); j = j + 2)
		_putchar(str[j]);
	_putchar('\n');
}
