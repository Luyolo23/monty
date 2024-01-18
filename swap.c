#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void swap(stack_t **s, unsigned int line_n)
{
	stack_t *ptr2;
	stack_t *ptr3;

	if (*s == NULL || (*s)->next == NULL)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*s)->next;
	ptr3 = (*s)->next->next;
	ptr2->next = *s;
	(*s)->next = ptr3;
	*s = ptr2;
}
