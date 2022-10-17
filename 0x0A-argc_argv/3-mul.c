/* this project multiply two numbers */
#include<stdio.h>
#include<stdlib.h>
/**
* main- this is where my project start
* @argc: the command line argument
* @argv: contians the project command
* line argument
* Return: zero or one
*/
int main(int argc, char *argv[])
{
	int first_num, second_num, product;

	if (argv == NULL)
		return (1);
	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		first_num = atoi(argv[1]);
		second_num = atoi(argv[2]);
		product = first_num * second_num;
		printf("%d\n", product);
	}
	return (0);
}
