#include "lists.h"

/**
 * pop_listint - delete head node of a listint_t linked list, and return head node’s data (n).
 * @head: the list
 * Return: int value
 */
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *temp;

	if (*head)
	{
		temp = (*head)->next;
		x = (*head)->n;
		free(*head);
	}
	*head = temp;
	return (x);
}
