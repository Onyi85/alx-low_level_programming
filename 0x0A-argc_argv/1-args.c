/* this program prints numbers argument */
#include<stdio.h>
/**
 * main - this is where my project start
 * @argc: the command line argument
 * @argv: contains the project command
 * line argument
 * Return: number
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 2)
	{
		sum = 0;
	}
	else
	{
		for (i = 0; i < argc && argv[0] != 0; i++)
		{
			if (i > 0)
				sum += 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
