#include "monty.h"
/**
 * nop - does not do anything
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void nop(stack_t **s, unsigned int line_n)
{
	(void) **s;
	(void) line_n;
}
