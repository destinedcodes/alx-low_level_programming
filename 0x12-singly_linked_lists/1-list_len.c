#include "lists.h"

/**
* list_len - A function that returns the number of elements in a linked list_t
* @h: The head of a linked list
*
* Return: Number of elements in linked list
*
* Author: DestinedCodes (Destiny Saturday)
* Date: 05-07-2023
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
