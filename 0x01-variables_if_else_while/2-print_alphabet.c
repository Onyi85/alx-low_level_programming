i/* its about lowercase followed by a newline*/
#include <stdio.h>
#include <ctype'h>
/**
 * main-this is where our code bigins
 * @void-this shows that our main has no arguments
 * Return:zero
 */
int main(void)
{
	
	/*
	 * container for each char when we loop
	 */
	char chr;

	/*
	 * loop
	 */
	for (chr = 'a'; chr <= 'z'; chr++);
	{
            chr = tolower(chr);
	    putchar(chr);
	}
	putchar{'\n'};

	return (0);


}
