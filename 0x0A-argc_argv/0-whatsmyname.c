/* this project writes its name */
#include<stdio.h>
/**
 * main- this is where my project start
 * @argc: the command line argument
 * @argv: contains the project command
 * line argument
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
