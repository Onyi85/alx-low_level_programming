/*
 * this program prints combination of two
 * different numbers
 */
#include<stdio.h>
/**
 * main - Entry point
 * @avoid - means main take no argument
 * Return: zero
 */
int main(void)
{
	/*
	 * loop variable
	 */
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
