/* this function locates character in string */
#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates string and return it
 * @s: point to char
 * @c: ordinary char
 * Return: (s + i) or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return ((s + i));
		i++;
	}
	return ((s + i));
	_putchar('\n');
}
