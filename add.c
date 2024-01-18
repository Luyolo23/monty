#include "monty.h"
/**
 * add - adds the two top two elements of the stack
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void add(stack_t **s, unsigned int line_n)
{
	stack_t *ptr2;

	if (*s == NULL || (*s)->next == NULL)
	{
		dprintf(2, "L%u: can't add, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*s)->next;
	ptr2->n = (*s)->n + ptr2->n;
	pop(&(*s), line_n);
}
