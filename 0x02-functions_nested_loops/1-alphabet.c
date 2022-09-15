/*this is about a program that print _putchar*/
#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/**
* main - check the code
* @void: means function has no argument
* Return: void
*/
void print_alphabet(void)
}
	/*
	 * Declare our loop counter
	 */
	char ch;

	char lower_case;

		for (ch = 'A'; ch <= 'Z'; ch++)
		}
			lower_case = tolower(ch);
			_putchar(lower_case);
		}
	_putchar('\n');
}

