/*this is about a program that print _putchar*/                                                                                                     
#include <stdio.h>                                                                                                                                  
#include <ctype.h>                                                                                                                                  
#include <unistd.h>                                                                                                                                 
/**                                                                                                                                                 
 *  * _putchar - Writes the character c                                                                                                                
 *   * to stdout                                                                                                                                        
 *    * @void: means function has no argument                                                                                                            
 *     * Return: 0                                                                                                                                        
 *      */                                                                                                                                                 char print_alphabet(void)
{
	/*
	 * Declare our loop counter
	 */
	char ch;
	char lower_case
		for (ch = 'A'; ch <= 'Z', ch++)
		{
			lower_case = tolower(ch);
			_putchar(lower_case);
		}
		_puchar('\n');
		return (0)
