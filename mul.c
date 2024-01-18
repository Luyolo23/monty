#include "monty.h"
/**
 * mul - multiplies second top element of stack with top element of stack
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void mul(stack_t **s, unsigned int line_n)
{
	stack_t *ptr2;

	if (*s == NULL || (*s)->next == NULL)
	{
		dprintf(2, "L%u: can't mul, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*s)->next;
	ptr2->n = ptr2->n * (*s)->n;
	pop(&(*s), line_n);
}
