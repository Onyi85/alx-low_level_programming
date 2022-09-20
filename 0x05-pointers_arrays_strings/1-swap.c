/* this is about pointers array and strings */
#include "main.h"
/**
 * swap_int- a program prepared about pointers
 * array and integer
 * @a:a pointer tob integer
 * @b:pointer to integer
 */
void swap_int(int *a, int *b)
{
	int val_a;
	int val_b;
		val_b = *b;
		val_a = *a;
		*a = val_b;
		*b = val_a;

}
