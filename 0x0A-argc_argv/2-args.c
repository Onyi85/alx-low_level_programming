/* this project prints all argument it recieves */
#include<stdio.h>
/**
 * main- this is where my project start
 * @argc: the command line argument
 * @argv: contians the project command
 * line argument
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	if (argv == NULL)
	{

		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)

			printf("%s\n", argv[i]);				        }
	return (0);
}
