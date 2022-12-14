#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - This function releases the node memory from the heap
 *@head: poiner to a struct
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
