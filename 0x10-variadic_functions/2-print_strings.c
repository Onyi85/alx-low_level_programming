/* this function prints string in a variadic function */
#include<stdio.h>
#include <stdarg.h>
/**
 * print_string - this function prints string in a variadic function
 * @separator: litral string
 * @n: unsigned (no nagative) int
 * ...: ellipsis
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);
	if (separator == NULL || separator == 0)
		separator = "";
	for (i = 1; i <= n; i++)
	{
		str = va_arg(list, char *);
		if (str == 0)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
