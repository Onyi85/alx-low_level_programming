#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - This function finds the sum of variable arguments
 *@n: unsigned int which serve as our iteration stop point
 *@...: ellipsis
 *Return: sum or zero
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	int tmp;
	va_list list;

	sum = 0;
	va_start(list, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{

			tmp = va_arg(list, unsigned int);
			sum = sum + tmp;
		}
	}
	va_end(list);
	return (sum);
}
