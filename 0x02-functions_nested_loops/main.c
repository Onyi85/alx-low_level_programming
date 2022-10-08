#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @void: means our main has no argument
 * Return: zero
 */
int main(void)
{
	/*
	 * invoking print_alphabet function
	 */


	print_alphabet();
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}

