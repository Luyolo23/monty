#include "monty.h"
/**
 * sub - subtracts top element of stack from second top element of stack
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void sub(stack_t **s, unsigned int line_n)
{
	stack_t *ptr2;

	if (*s == NULL || (*s)->next == NULL)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*s)->next;
	ptr2->n = ptr2->n - (*s)->n;
	pop(&(*s), line_n);
}
