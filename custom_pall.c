#include "monty.h"
/**
 * pall - prints all elements
 * @s: pointer to pointer
 * @line_n: unsigned int
 * Return: nothing
 */
void pall(stack_t **s, unsigned int line_n)
{
	stack_t *ptr;
	size_t cnt = 0;

	(void) line_n;
	ptr = *s;
	if (ptr == NULL)
	{
		return;
	}
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		cnt++;
	}
}
