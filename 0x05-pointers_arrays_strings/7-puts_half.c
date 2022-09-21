/* this program prints half of array */
#include "main.h"
/**
 * puts_half - print half of the array
 * @str: pointer to a char
 */
void puts_half(char *str)
{
	int i, len;
	char *ch;

	i = 0;
	ch = str;
	while (str[i] != '\0')
		i++;
	len = i - 1;
	for (i = 0; i < (len - 1) / 2; i++)
		ch++;
	for (i = 0; 1 > (len - 1) / 2; i++
			_putchar('\n');
}
