#include "lists.h"

/**
* print_list - A function that prints all the elements of a list_t list.
* @h: The head of a linked list
*
* Return: Number of elements in linked list
*
* Author: DestinedCodes (Destiny Saturday)
* Date: 05-07-2023
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
