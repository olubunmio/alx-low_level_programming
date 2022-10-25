#include "lists.h"

/**
 * pop_listint - removes head node of a list
 * @head: pointer
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);
	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (ret);
}
