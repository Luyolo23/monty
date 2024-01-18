#include "monty.h"
/**
 * pchar -  prints the char at the top of the stack, followed by \n
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void pchar(stack_t **s, unsigned int line_n)
{
	if (*s == NULL)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", line_n);
		exit(EXIT_FAILURE);
	}
	if ((*s)->n < 32 || (*s)->n > 127)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", line_n);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*s)->n);
}
