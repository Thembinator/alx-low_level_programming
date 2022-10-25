#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to the head of a listint_t list
 * Return: 0 if the linked list is empy otherwise,
 * returns the head node’s data
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
