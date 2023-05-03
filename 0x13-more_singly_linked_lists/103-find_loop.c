#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of node where loop starts, else NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *mazda = head;
	listint_t *volvo = head;

	if (!head)
		return (NULL);

	while (mazda && volvo && volvo->next)
	{
		volvo = volvo->next->next;
		mazda = mazda->next;
		if (volvo == mazda)
		{
			mazda = head;
			while (mazda != volvo)
			{
				mazda = mazda->next;
				volvo = volvo->next;
			}
			return (volvo);
		}
	}

	return (NULL);
}
