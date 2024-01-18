#include "monty.h"
/**
 * rotr - rotates the stack to the bottom
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void rotr(stack_t **s, unsigned int line_n)
{
	stack_t *ptr;
	stack_t *temp;
	stack_t *last_ptr;

	(void)line_n;
	ptr = *s;
	temp = *s;
	if (*s == NULL || (*s)->next == NULL)
	{
		return;
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->prev->next = NULL;
	last_ptr = ptr;
	last_ptr->next = temp;
	last_ptr->prev = NULL;
	temp->prev = last_ptr;
	*s = last_ptr;
}
