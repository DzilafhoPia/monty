#include "monty.h"
/**
 * f_pall - prints the stck
 * @head: sack head
 * @counter: not used
 * Return: no retrn
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
