#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints number the elements of a linked list
 * @h: pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
