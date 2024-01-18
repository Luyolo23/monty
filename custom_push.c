#include "monty.h"
/**
 * push - adds an element into the stack or queue
 * @s: pointer to pointer
 * @line_n: unsigned int
 * Return: nothing
 */
void push(stack_t **s, unsigned int line_n)
{
	stack_t *temp;
	int cnt = 0;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (global.line_cpy[1] == NULL)
	{
		free(temp);
		dprintf(2, "L%u: usage: push integer\n", line_n);
		exit_status();
	}
	if (global.line_cpy[1][0] == '-')
	{
		cnt++;
	}
	while (global.line_cpy[1][cnt] != '\0')
	{
		if (!isdigit(global.line_cpy[1][cnt]))
		{
			free(temp);
			dprintf(2, "L%u: usage: push integer\n", line_n);
			exit_status();
		}
		cnt++;
	}
	temp->n = atoi(global.line_cpy[1]);
	temp->prev = NULL;
	temp->next = *s;
	if (*s != NULL)
	{
		(*s)->prev = temp;
	}
	*s = temp;
}
