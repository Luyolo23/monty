#include "monty.h"
/**
 * pop - removes top element of the stack
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void pop(stack_t **s, unsigned int line_n)
{
	stack_t *ptr;

	if (*s == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", line_n);
		exit(EXIT_FAILURE);
	}
	ptr = *s;
	*s = (*s)->next;
	free(ptr);
}
