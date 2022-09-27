/*
 * this is about a function that copy memory area
 */
#include <stdio.h>
#include "main.h"
/**
 * _memcpy - this function copys a memory location
 * @dest: pointer to char
 * @src: pointer to char
 * @n: ordinary unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
