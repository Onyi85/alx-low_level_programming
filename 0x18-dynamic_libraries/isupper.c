/* this is about uppercase*/
#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* _isupper-its checkfor uppercase
* character
* @c: means that parameter is an int
* Return: 1 or 0 depend on
* the lose type
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
		return (0);
	_putchar('\n');
}
