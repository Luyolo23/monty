#include "monty.h"
/**
 * pstr -  prints string starting at top of stack, followed by a \n
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void pstr(stack_t **s, unsigned int line_n)
{
	stack_t *ptr;

	(void) line_n;
	ptr = *s;
	while (ptr != NULL && ptr->n != 0 && ptr->n >= 0 && ptr->n <= 127)
	{
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	printf("\n");
}
