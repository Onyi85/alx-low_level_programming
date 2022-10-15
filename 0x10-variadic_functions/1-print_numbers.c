/* This function prints a string with variable arguments in a function */
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - This function prints numbers in a variadic function
 * @separator: string literals
 * @n: unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (separator == NULL)
		return;

	if (separator[0] != ',' || separator[1] != ' ')
		printf("%c, ", *separator);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i < n)
			printf(", ");
	}
	va_end(list);
	printf("\n");
}
