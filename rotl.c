#include "monty.h"
/**
 * rotl - rotates the stack to the top
 * @s: pointer to pointer
 * @line_n: line number
 * Return: nothing
 */
void rotl(stack_t **s, unsigned int line_n)
{
	stack_t *ptr;
	stack_t *temp;
	stack_t *new_ptr;

	(void)line_n;
	if (*s == NULL || (*s)->next == NULL)
	{
		return;
	}
	new_ptr = *s;
	temp = *s;
	ptr = (*s)->next;
	while (new_ptr->next != NULL)
	{
		new_ptr = new_ptr->next;
	}
	temp->prev = new_ptr;
	new_ptr->next = temp;
	temp->next = NULL;
	ptr->prev = NULL;
	*s = ptr;
}
