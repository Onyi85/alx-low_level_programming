/* this is about uppercase*/
#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* _isupper-its checkfor uppercase
* character
* @c: means that parameter is an int
* Return: 1 or c depend on
* the lose type
*/
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
