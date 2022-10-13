/* this function works as a calculator */
#include<stdio.h>
#include<stdlib.h>
#include "3-calc.h"
/**
 * op_add - this program adds two integers
 * @a: just int
 * @b: just int
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - this program subtracts two integers
 * @a: just int
 * @b:just int
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this program multiplies two integers
 * @a: just int
 * @b: just int
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this program finds the remainder of two integers
 * @a: just integer
 * @b: just integer
 * Return: quotient of two numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
 * op_mod - this program returns the quotient of two integers
 * @a: just integer
 * @b: just integer
 * Return: remainder of the two integers when divided
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
