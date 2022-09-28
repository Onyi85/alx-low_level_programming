/* this program prints the various size of any computer */
#include <stdio.h>
/**
 * main - this is where our starts
 * @void: indicates the main function has no arguments
 * Return: zero, which will pass to the status variable
 */
int main(void)
{
	/*
	 * Display the size of a char in byte
	 */
	printf("size of a char: %d byte(s)\n", sizeof(char));
	/*
	 * Display the size of an int in bytes
	 */
	printf("size of an int: %d byte(s)\n", sizeof(int));
	/*
	 * Display the size of a long int in bytes
	 */
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	/*
	 * Display the size of a long long int in bytes
	 */
	printf("size of a long long int: %d byte(S)\n", sizeof(long long int));
	/*
	 * Display the size of a float in bytes
	 */
	printf("size of a float: %d byte(S)\n", sizeof(float));

	return (0);
}
