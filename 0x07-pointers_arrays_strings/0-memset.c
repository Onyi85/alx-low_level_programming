/*
 * this program fills memory with
 * constant bytes
 */
#include <stdio.h>
#include "main.h"
/**
 * _memset - This function fills memory
 * with constant bytes
 * @s: pointer to char
 * @b: ordinary char
 * @n: ordinary unsigned int
 * Return: zero 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);

}
