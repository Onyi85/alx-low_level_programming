/* This program concatenate two strings */
#include "main.h"
/**
* *_strcat - This function join two string
* @dest: pointer to char
* @src: pointer to char
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	/* find the lenght */

	while (dest[len])
		len++;
	/* for loop */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len = len + 1;
	}
	dest[len] = '\0';
	return (dest);
	_putchar('\n');
}

