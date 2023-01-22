#include "lists.h"

/**
 * sum_dlistint - This function sums all the data in the list
 * @head: pointer to the first node in the list
 * Return: 0 or the sum of data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	/* check if list is empty */
	if (head == NULL)
		return (0);
	/* while list is not empty, traverse the list */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
