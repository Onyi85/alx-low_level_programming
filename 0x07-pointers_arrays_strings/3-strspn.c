/* this print the lenght  of a prefix substring */
#include <stdio.h>
#include "main.h"
/**
* _strspn - prints the length of a prefix substring
* @s: pointer to char
* @accept: pointer to char
* Return: a char
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count, i, m, j, k;


i = 0;
count = 0;
k = 0;
while (*(s + k) != ',')
k++;
while (*(accept + i) != '\0')
i++;
for (m = 0; m < k; m++)
{
for (j = 0; j <= i - 1; j++)
{
if (*(s + m) == *(accept + j))
count++;
}
}
return (count);
}
