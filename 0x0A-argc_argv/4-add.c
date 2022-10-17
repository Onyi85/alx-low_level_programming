/* this project adds positive numbers */
#include<stdio.h>
#include<stdlib.h>
/**
 * main- this is where my project start
 * @argc: the command line argument
 * @argv: contians the project command
 * line argument
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, sum, column;

	if (argv == NULL)
		return (1);
	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (column = 0; argv[i][column] != '\0'; column++)
			{
				if (argv[i][column] < '0'
						|| argv[i][column] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
