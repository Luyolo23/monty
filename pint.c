#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @s: pointer to pointer
 * @line_n: unsigned int
 * Return: nothing
 */
void pint(stack_t **s, unsigned int line_n)
{
	if (*s == NULL)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", line_n);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*s)->n);
}
