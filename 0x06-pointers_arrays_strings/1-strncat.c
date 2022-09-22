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
	int a, i;

	a = i = 0;
	/* find the lenght */

	while (*(dest + a))
		a++;
	/* for loop */
	while (i < n && *(src + i))
	{
		*(dest + a) = *(src + i);
		a++;
		i++;
	}
	if (i < n)
	*(dest + a) = *(src +i);
	return (dest);
}
