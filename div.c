#include "monty.h"
/**
 * _div - divides second top element of stack by top element of stack
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void _div(stack_t **s, unsigned int line_n)
{
	stack_t *ptr2;

	if (*s == NULL || (*s)->next == NULL)
	{
		dprintf(2, "L%u: can't div, stack too short\n", line_n);
		exit(EXIT_FAILURE);
	}
	ptr2 = (*s)->next;
	if ((*s)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", line_n);
		exit(EXIT_FAILURE);
	}
	ptr2->n = ptr2->n / (*s)->n;
	pop(&(*s), line_n);
}
