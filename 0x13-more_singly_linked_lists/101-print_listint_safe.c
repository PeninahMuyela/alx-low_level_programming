
#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - Counts number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: number of nodes in list, else 0 If the list is not looped
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *beetle, *bee;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	beetle = head->next;
	bee = (head->next)->next;

	while (bee)
	{
		if (beetle == bee)
		{
			beetle = head;
			while (beetle != bee)
			{
				nodes++;
				beetle = beetle->next;
				bee = bee->next;
			}

			beetle = beetle->next;
			while (beetle != bee)
			{
				nodes++;
				beetle = beetle->next;
			}

			return (nodes);
		}

		beetle = beetle->next;
		bee = (bee->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
