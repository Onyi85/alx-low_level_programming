/*
*this print a single
*character
*/
#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
* -putchar - writes the character c to stdout
*@c: The character to print
*Return: on success 1,
*on error, -1 is returned, and errno is set appropriately.
*/
	int _putchar(char c)
{
	return (write(1, &c, 1));

}
