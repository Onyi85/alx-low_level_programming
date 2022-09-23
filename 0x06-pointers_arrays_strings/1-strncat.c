/* This program concatenate two strings based on the length */
#include "main.h"
/**
* *_strncat - This function join two string
* @dest: pointer to char
* @src: pointer to char
* @n: largest largest number of bytes
* to append
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int c, d;

	c = d = 0;
	/* find the lenght */

	while (*(dest + c))
		c++;
	/* for loop */
	while (d < n && *(src + d))
	{
		*(dest + c) = *(src + d);
		c++;
		d++;
	}
	if (d < n)
	*(dest + c) = *(src + d);
	return (dest);
}
